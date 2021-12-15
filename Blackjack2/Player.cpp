#include "Player.h"
#include <iostream>

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "\nYou got "; 
    
    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();
}

void Player::CountScore(Score m_score)
{
    m_score.SetScore(1);
    m_score.AddScore();
    m_score.UpdateScore();
    m_score.GetScore();
    std::cout << "your score is: " << m_score.GetScore() << std::endl;
}

void Player::PrintScore(Score m_score)
{
}

