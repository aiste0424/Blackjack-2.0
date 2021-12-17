#include "Dealer.h"
#include <iostream>

//Aiste's function
void Dealer::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "The dealer got ";

    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

    std::cout << "Dealer's points: ";
    m_score.SetCardValue(deck.GetValue());

    m_score.UpdateScore();
    m_score.PrintScore();
}
//Gergo's function
int Dealer::GetScore(Score score)
{
    return m_score.GetScore();
}

