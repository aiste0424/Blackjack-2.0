#include "Dealer.h"
#include <iostream>

void Dealer::ResetScore()
{
    m_score.SetScore(0);
}

//Aiste's function
void Dealer::DrawCard(Deck deck)
{
    //gives random number
    deck.SetRandomSuit();
    deck.SetRandomRank();

    std::cout << "Dealer's points: ";
    m_score.SetCardValue(deck.GetValue());

    m_score.UpdateScore();
    m_score.PrintScore();
    std::cout << "The dealer got ";

    deck.PrintCurrentCardRank();
    deck.PrintCurrentCardSuit();
    deck.PrintPicture();

}
//Gergo's function
int Dealer::GetScore(Score score)
{
    return m_score.GetScore();
}

