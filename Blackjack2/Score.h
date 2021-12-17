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

	void PrintScore();
	void UpdateScore();
	void ResetScore();//replayability purposes

	//get a value of the current card from the deck class and set it
	void SetCardValue(int value);

private:

	int m_cardValue;
	int m_score;
};