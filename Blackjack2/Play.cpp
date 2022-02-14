#include "Play.h"
#include <iostream>

//GERGO'S
void Play::MainGame()
{
    // while (m_player.GetChoice() == static_cast<int>(Player::Choice::Yes) ||   //loop player choices  Yes/No
    //       m_player.GetScore(m_score) < 21)     //this line is the reason why it inappropriatry offers another card at the end of some hands.

    do {
        std::cout << "--------------you enter the loop-----------------" << std::endl;
        m_player.MakeChoice(m_deck);

        if (m_player.GetScore(m_score) > 21)      //If the player asks for another card, and busts - Lose function
        {
            m_outcome.Lose(m_player, m_dealer, m_score, m_cash);
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
                m_outcome.Win(m_player, m_dealer, m_score, m_cash);
                break;
            }
            else if (m_player.GetScore(m_score) ==  //Defining Tie conditions after player chooses no more cards
                m_dealer.GetScore(m_score))
            {
                m_outcome.Draw(m_player, m_dealer, m_score, m_cash);
                break;
            }
            else   //Any other case than the above, player loses
            {
                m_outcome.Lose(m_player, m_dealer, m_score, m_cash);
                break;
            }
        }
    } while (m_player.GetChoice() == static_cast<int>(Player::Choice::Yes) ||   //loop player choices  Yes/No
        m_player.GetScore(m_score) < 21);
}

bool Play::EnoughHoney()
{
    if (m_player.IsBankrupt() == true)
    {
        return false;
        std::cout << "Player is bankrupt" << std::endl;
        system("pause");

        std::cout << "Player game got reset" << std::endl;
        m_player.ResetCash();
        m_player.ResetScore(m_score);
        m_dealer.ResetScore(m_score);
        m_deck.ResetCards();
        system("pause");
        system("CLS");

    }
    else
    {
        return true;
        std::cout << "player has ";
        m_player.ShowCash();
        std::cout << " coins" << std::endl;
        system("pause");
    }
}

void Play::TheBet()
{
    std::cout << "How many coins you will risk?" << std::endl;
    std::cout << "| 5 | | 10 | | 20 | | 50 |" << std::endl;
    std::cout << "  1     2       3     4 " << std::endl;
    std::cin >> bet;
    
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

     //============== Does Player have a BLACKJACK ==========
     m_outcome.IsBlackjack(m_player, m_dealer, m_score, m_cash);// Gergo

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
    std::cout << "The game score has been reset";
    m_dealer.ResetScore(m_score);
    m_player.ResetScore(m_score);
    system("CLS");
}
