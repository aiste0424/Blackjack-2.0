#pragma once
#include "Cards.h"
#include "Deck.h"

class Score
{
public:

	Score();

	//get a value of the current card from the deck class and set it
	void SetCardValue(int value);

	void PrintScore();
	void CountScore();

	int GetScore();

private:

	int m_cardValue;
	int m_score;
};