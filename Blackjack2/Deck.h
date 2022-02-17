#pragma once
#include <string>
#include "Cards.h"
#include <vector>
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

	void CardTaken(); //checks if a card was taken, if yes, sets it to 'taken'
	void ResetCards(); //resets 'taken' to false for replayability purposes

private:

	//the correct symbol for the card's picture
	std::string m_symbol;

	//variables for a random position in the matrix
	int m_randomSuit;
	int m_randomRank;

	const int m_maxSuit = 4;
	const  int m_maxRank = 78;
	const int m_decksUsed = 6;

	Cards m_deck[4][78];

	int m_rank;
	int m_value;
	int m_rankCounter;
};

