#pragma once
#include <string>
#include "Cards.h"

class Deck
{
public:

	Deck();
	void SetRandomSuit();
	void SetRandomRank();

	void PrintCurrentCardSuit();
	void PrintCurrentCardRank();

	void CardTaken();
	void PrintPicture();
	void ResetCards();

private:
	
	std::string m_symbol;

	int m_randomSuit;
	int m_randomRank;

	const int m_suitNumber = 4;
	const int m_rankNumber = 13;
	
	Cards m_deck[4][13];
};

