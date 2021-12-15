#include "Dealer.h"
#include <iostream>

void Dealer::DrawCard(Deck deck)
{
	//gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();
    
    std::cout << "The dealer got ";

    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();
}
