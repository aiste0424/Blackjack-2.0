#include "Player.h"
#include <iostream>

void Player::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomType();
    deck.SetRandomValue();

    std::cout << "\nYou got ";
    
    //checking if the card has been taken
    deck.CardTaken();
    deck.PrintCurrentCardValue();
    deck.PrintCurrentCardType();
    deck.PrintPicture();
}