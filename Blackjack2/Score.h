#pragma once
#include "Deck.h"
#include "Cards.h"
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
class Score
{
public:

	Score();

	int GetScore();
	void SetScore(int score);
	void PrintScore();
	void UpdateScore();

	//get a value of the current card from the deck class and set it
	void SetCardValue(int value);

private:

	int m_cardValue;
	int m_score;
};