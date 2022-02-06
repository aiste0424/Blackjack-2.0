#include "Play.h"
#include <iostream>

//GERGO'S
void Play::MainGame()
{
    //============== Make a choice ========== 
     
    while (m_player.GetChoice() == static_cast<int>(Player::Choice::Yes) ||   //loop player choices  Yes/No
           m_player.GetScore(m_score) < 21)
    {
        m_player.MakeChoice(m_deck);

        if (m_player.GetScore(m_score) > 21)      //If the player asks for another card, and busts - Lose function
        {
            m_outcome.Lose(m_player, m_dealer, m_score);
            break;
        }

        if (m_player.GetChoice() == static_cast<int>(Player::Choice::No))  //If player chooses no more cards, dealer pulls cards until reaches 17, or bust
        {
            do {
                m_dealer.DrawCard(m_deck);      //Dealer automatically draws cards untill reaches 17
                m_deck.CardTaken();

            } while (m_dealer.GetScore(m_score) < 17);

            if (m_dealer.GetScore(m_score) <= 17 &&   //Defining win conditions after player chooses no more cards
                m_player.GetScore(m_score) <= 21 &&
                m_player.GetScore(m_score) > m_dealer.GetScore(m_score) ||
                m_dealer.GetScore(m_score) > 21 &&
                m_player.GetScore(m_score) <= 21)
            {
                m_outcome.Win(m_player, m_dealer, m_score);
                break;
            }
            else if (m_player.GetScore(m_score) ==  //Defining Tie conditions after player chooses no more cards
					 m_dealer.GetScore(m_score))
            {
                m_outcome.Draw(m_player, m_dealer, m_score);
                break;
            }
            else   //Any other case than the above, player loses
            {
                m_outcome.Lose(m_player, m_dealer, m_score);
                break;
            }
        }
    }
}

//Aiste's function
void Play::TheDeal()
{
    //============== 1st card to PLAYER ==========
    PlayerTurn();
    PauseClear();
 
    //============== 1st card for DEALER =========
    DealerTurn();
    PauseClear();

    //============== 2nd card for PLAYER =========
    PlayerTurn();
    PauseClear();

    //======= Does Player have a BLACKJACK =======
    m_outcome.IsBlackjack(m_player, m_dealer, m_score);// Gergo

    //=========== INSERT DOUBLE/SPLIT HERE =======
	m_doubleDown.DoubleDown(m_player, m_score /*bet*/);
	m_split.Split(m_player, m_score /*bet*/);
}
//Aiste's 3 functions
//TODO proper pause/clear in the next assignment 
void Play::PauseClear()
{
    system("pause");
    //system("CLS");
}

void Play::PlayerTurn()
{
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();
}

void Play::DealerTurn()
{
    m_dealer.DrawCard(m_deck);
    m_deck.CardTaken();
}

void Play::Restart()
{
    std::cout << "The game has been reset";
    m_deck.ResetCards();
    m_dealer.ResetScore();
    m_player.ResetScore();
}
