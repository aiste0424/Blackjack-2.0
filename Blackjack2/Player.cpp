#include "Player.h"
#include <iostream>

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomType();
    deck.SetRandomValue();

    std::cout << "\nYou got "; 
    deck.PrintCurrentCardValue();
    deck.PrintCurrentCardType();
    deck.PrintPicture();
}

void Player::PrintScore()
{    
    m_score.AddScore();
    m_score.UpdateScore();
    std::cout << "Your current score is : " << m_score.GetScore() << std::endl;
}
