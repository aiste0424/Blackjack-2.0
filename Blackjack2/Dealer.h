#pragma once
#include "Score.h"
#include "Deck.h"
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
class Dealer
{
public:

	void DrawCard(Deck deck);
	int GetScore(Score score);   //Gergo did this function to pull player/dealer score for the outcomes
	void ResetScore(Score score); //simas

private:

	Score m_score;
	Deck m_deck;
};