#include "Player.h"
#include <iostream>

Player::Player()
{
    
}

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "\nYou got "; 
    
    //prints relevant stuff
    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

    m_score.SetCardValue(deck.GetValue());
   
    m_score.CountScore();
    m_score.PrintScore();
}
