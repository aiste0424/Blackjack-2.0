#pragma once
#include "Score.h"
#include "Deck.h"

class Dealer
{
public:

	Dealer() {};

	int GetScore(Score score);   //Gergo did this function to pull player/dealer score for the outcomes

	void DrawCard(Deck deck);

private:

	Score m_score;
	Deck m_deck;
};