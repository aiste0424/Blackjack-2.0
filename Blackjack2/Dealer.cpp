#include "Dealer.h"
#include "Deck.h"
#include <iostream>

void Dealer::DrawCard(Deck deck)
{
	//gives random number
    deck.SetRandomType();
    deck.SetRandomValue();
    
    std::cout << "The dealer got ";

    //TODO: CardTaken() doesn't work here, but works in main
    //deck.CardTaken();
    deck.PrintCurrentCardValue();
    deck.PrintCurrentCardType();
    deck.PrintPicture();
}
