#include "Dealer.h"
#include <iostream>

//Aiste's function
void Dealer::DrawCard(Deck& deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "The dealer has ";
    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

    std::cout << "The dealer is on # ";
    m_score.SetCardValue(deck.GetValue());
    m_score.UpdateScore();
    m_score.PrintScore();
}
//Gergo's function
int Dealer::GetScore(Score score)
{
    return m_score.GetScore();
}

void Dealer::ResetScore(Score score)
{
    m_score.SetScore(0);
}

