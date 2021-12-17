#pragma once
#include "Score.h"
#include "Deck.h"
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
class Dealer
{
public:

	void ResetScore();
	void DrawCard(Deck deck);
	int GetScore(Score score);   //Gergo did this function to pull player/dealer score for the outcomes

private:

	Score m_score;
	Deck m_deck;
};