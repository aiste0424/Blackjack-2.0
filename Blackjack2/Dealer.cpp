#include "Dealer.h"
#include <iostream>

int Dealer::GetScore(Deck deck)
{
    return m_deck.GetValue();
}

void Dealer::DrawCard(Deck deck)
{
	//gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();
    
    std::cout << "The dealer got ";

    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

//TODO: insert dealer AI here, like:
//TODO: if player said no more cards, do DrawCard while dealerScore >= 17

}
