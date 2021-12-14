#include "Player.h"
#include <iostream>

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomType();
    deck.SetRandomValue();

    std::cout << "\nYou got "; 
    
    //TODO: CardTaken() doesn't work here, but works in main
    //deck.CardTaken();
    deck.PrintCurrentCardValue();
    deck.PrintCurrentCardType();
    deck.PrintPicture();
}

void Player::PrintScore()
{
    std::cout << "Your current score is : " << m_score.GetScore() << std::endl;
}

