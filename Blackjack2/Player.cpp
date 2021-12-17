#include "Player.h"
#include <iostream>
#include <string>

Player::Player()
{
    m_choice = 0;
}

int Player::GetScore(Score score)
{
    return m_score.GetScore();
}

int Player::GetChoice()
{
    return m_choice;
}

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "\nYou have ";

    //prints relevant stuff
    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

    m_score.SetCardValue(deck.GetValue());

    m_score.CountScore();
    m_score.PrintScore();
}

void Player::MakeChoice(Deck deck)
{
    std::cout << "Would you like another card? [1/0]" << std::endl;
    std::cin >> m_choice;


    if (m_choice == static_cast<int>(Player::Choice::No))
    {
        std::cout << "Player stays on " << m_score.GetScore() << "! Dealers turn." << std::endl; //Gergo
    }
    else if (m_choice == static_cast<int>(Player::Choice::Yes))
    {
        std::cout << "Card for the Player!" << std::endl;

        //gives random number
        deck.SetRandomSuit();
        deck.SetRandomRank();

        std::cout << "\nYou have ";

        //prints relevant stuff
        deck.PrintCurrentCardRank();
        deck.PrintCurrentCardSuit();
        deck.PrintPicture();

        m_score.SetCardValue(deck.GetValue());
        m_score.CountScore();

        m_score.PrintScore();
    }
    else
    {
        m_error.ValidInput(m_choice);
    }
}