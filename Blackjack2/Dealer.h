#pragma once
#include "Deck.h"

class Dealer
{
public:

	Dealer() {};

	int GetScore(Deck deck);

	void DrawCard(Deck deck);

private:

	Deck m_deck;
};

