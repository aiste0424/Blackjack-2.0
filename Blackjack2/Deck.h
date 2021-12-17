#pragma once
#include <string>
#include "Cards.h"
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
class Deck
{
public:

	Deck();

	void SetRandomSuit();
	void SetRandomRank();

	int GetValue();

	void PrintPicture();
	void PrintCurrentCardSuit();
	void PrintCurrentCardRank();

	//checks if a card was taken, if yes, sets it to 'taken'
	void CardTaken();
	//resets 'taken' to false for replayability purposes
	void ResetCards();

private:
	
	//the correct symbol for the card's picture
	std::string m_symbol;

	int m_randomSuit;
	int m_randomRank;

	const int m_suitNumber = 4;
	const int m_rankNumber = 13;
	
	Cards m_deck[4][13];
};

