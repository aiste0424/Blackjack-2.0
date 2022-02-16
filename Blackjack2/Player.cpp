#include <string>
#include <iostream>
#include "Player.h"

//Aiste's 2 functions
Player::Player()
{
    m_choice = 0;
}

void Player::DrawCard(Deck& deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "Player's points: ";
    m_score.SetCardValue(deck.GetValue());
    
    m_score.UpdateScore();
    m_score.PrintScore();

    std::cout << "\nYou got ";

    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();
}

//Gergo's 2 functions
int Player::GetScore(Score score)
{
    return m_score.GetScore();
}

int Player::GetChoice()
{
    return m_choice;
}

//Simas' function
void Player::MakeChoice(Deck& deck)
{
    std::cout << "Would you like another card? [1/0]" << std::endl;
    std::cin >> m_choice;

    if (m_choice == static_cast<int>(Player::Choice::No))
    {
        std::cout << "Player stays on " << m_score.GetScore() << " points! Dealer's turn." << std::endl;
    }
    else if (m_choice == static_cast<int>(Player::Choice::Yes))
    {
        std::cout << "Card for the Player!" << std::endl;
        DrawCard(deck);
    }
    else
    {
        m_error.ValidInput(m_choice);
    }
}

void Player::ResetScore(Score score)
{
    m_score.SetScore(0);
}

void Player::ShowCash()
{
    return m_totalCash.PrintCash();
}

void Player::LooseCash()
{
    return m_totalCash.MinusCash();
}

void Player::WinCash()
{
    return m_totalCash.AddToCash();
}

bool Player::IsBankrupt()
{
    if (m_totalCash.GetCash() < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*bool Player::ValidBet()
{
    if (m_betValue.GetBetValue() > 10 )
    {
        std::cout << "bet is valid" << std::endl;
        return true;
    }
    else
    {
        std::cout << "bet is not valid" << std::endl;
        return false;
    }
}*/

void Player::ResetCash()
{
    m_totalCash.SetCash(1000);
}

int Player::GetCash(Cash cash)
{
    return m_totalCash.GetCash();
}

int Player::GetBet(Cash bet)
{
    return m_betValue.GetBetValue();
}

/*void Player::PickBet(Cash betValue)
{
    std::cout << "How many coins you will risk?" << std::endl;
    std::cout << "Your minimum is 10"<<std::endl;
    std::cin >> bets;
    m_betValue.SetBetValue(bets);
    std::cout << "Player bet ";
    m_betValue.PrintBet();
    std::cout << " coins" << std::endl;

    std::cout << "you have a grand total of ";
    m_totalCash.PrintCash(); //works
    std::cout <<" coins" << std::endl;

    //reducing the amoung we bet from what player already has
    m_totalCash.MinusCash();
    m_totalCash.GetCash();
    std::cout << "After placing your bet you are left with ";
    m_totalCash.PrintCash();
    std::cout << " coins" << std::endl;

}*/
