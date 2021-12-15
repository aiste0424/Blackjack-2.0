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

