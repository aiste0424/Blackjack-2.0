#include "Play.h"
#include <iostream>

void Play::MainGame()   //Gergo's function
{
    while (m_player.GetChoice() == static_cast<int>(Player::Choice::Yes) ||   //loop player choices if they want a card, or not + conditions
           m_player.GetScore(m_score) < 21 ||
           m_player.IsBankrupt() == false )
    {                
           m_player.MakeChoice(m_deck);        

        if (m_player.GetScore(m_score) > 21)      //If the player asks for another card, and busts - Lose function
        {
            m_outcome.Lose(m_player, m_dealer, m_score, m_cash, m_doubles);
            break;
        }

        if (m_player.GetChoice() == static_cast<int>(Player::Choice::No))  //If player chooses no more cards, dealer pulls cards until reaches 17, or busts
        {
            do {                       //Dealer automatically draws cards untill reaches 17
                m_dealer.DrawCard(m_deck);      
                m_deck.CardTaken();
            } while (m_dealer.GetScore(m_score) < 17);

            if (m_dealer.GetScore(m_score) <= 17 &&   //Defining win conditions after player chooses no more cards
                m_player.GetScore(m_score) <= 21 &&
                m_player.GetScore(m_score) > m_dealer.GetScore(m_score) ||
                m_dealer.GetScore(m_score) > 21 &&
                m_player.GetScore(m_score) <= 21)
            {
                m_outcome.Win(m_player, m_dealer, m_score, m_cash, m_doubles);
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
                m_outcome.Lose(m_player, m_dealer, m_score, m_cash, m_doubles);
                break;
            }
        }
    }
}

bool Play::EnoughHoney()   //Simas's function'
{
    if (m_player.IsBankrupt() == true)
    {
        std::cout << "Player is bankrupt" << std::endl;
        system("pause");

        std::cout << "Player game got reset" << std::endl;
        m_player.ResetCash();
        m_player.ResetScore(m_score);
        m_dealer.ResetScore(m_score);
        m_deck.ResetCards();
        system("pause");
        system("CLS");

        return false;
    }
    else
    {
        std::cout << "Player has ";
        m_player.ShowCash();
        std::cout << " coins" << std::endl;
        std::cout << std::endl;
        system("pause");
        return true;
    }
}

void Play::TheBet()   //Simas's function'
{
    do
    {
        std::cout << "Player has ";
        m_player.ShowCash();
        std::cout << " coins" << std::endl;
        std::cout << std::endl;
        std::cout << "Place your bet please. It has to be the multiples of 10." << std::endl;
        std::cout << std::endl;
        std::cout << "Minimum bet is 10" << std::endl;

        std::cin >> bet;

        m_cash.SetBetValue(bet);
        std::cout << "You put " << m_cash.GetBet() << " as your stake. Good luck!" << std::endl;

        system("pause");

    } while (m_cash.ValidBet() == false);
}

void Play::TheDeal(DoublesSplits doubles)   //Aiste's function
{
    if ( m_player.IsBankrupt()==false)
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
        m_outcome.IsBlackjack(m_player, m_dealer, m_score, m_cash); // Gergo

        //=========== INSERT DOUBLE/SPLIT HERE =======
        m_doubles.DoubleDown(m_player, m_dealer, m_score, m_cash);
        //m_split.Split(m_player, m_score /*bet*/); -->if first 2 cards values are the same. Don't ask otherwise!
    }
    else if (m_player.IsBankrupt() == true)
    {
        std::cout << "Player is out of coins." << std::endl;
        std::cout << "The game is reset" << std::endl;
        m_player.ResetCash();
        m_player.ResetScore(m_score);
        m_dealer.ResetScore(m_score);
        m_deck.ResetCards();
        system("pause");
        system("CLS");
    }
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

void Play::Restart()   //Simas's function
{
    std::cout << "The game has been reset";
    m_dealer.ResetScore(m_score);
    m_player.ResetScore(m_score);
    m_player.GetCash(m_cash);
    system("CLS");
}
