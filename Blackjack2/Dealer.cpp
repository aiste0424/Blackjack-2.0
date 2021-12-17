#include "Dealer.h"
#include <iostream>

int Dealer::GetScore(Score score)
{
    return m_score.GetScore();
}

void Dealer::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "The dealer has ";

    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

    m_score.SetCardValue(deck.GetValue());

    m_score.CountScore();
    std::cout << "DEALER ";
    m_score.PrintScore();
}