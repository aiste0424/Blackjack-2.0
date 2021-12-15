#pragma once
#include "GameObject.h"
#include "Deck.h"

class Dealer
{
public:

	Dealer() {};
	void DrawCard(Deck deck);
	void CountScore(Score m_score);

};

