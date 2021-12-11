#include "Dealer.h"
#include "Deck.h"
#include <iostream>

void Dealer::DrawCard(Deck deck)
{
	//gives random number
    deck.SetRandomType();
    deck.SetRandomValue();

    std::cout << "The dealer got ";

	//checking if the card has been taken
    
    deck.CardTaken();
    deck.PrintCurrentCardValue();
    deck.PrintCurrentCardType();
    deck.PrintPicture();
}
