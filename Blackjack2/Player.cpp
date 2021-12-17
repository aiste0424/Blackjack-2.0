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

void Player::ResetScore()
{
    m_score.SetScore(0);
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
    m_score.ResetScore();
}
