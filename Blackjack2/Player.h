#pragma once
#include "Deck.h"
#include "Score.h"

class Player
{
public:

	Player();
	void DrawCard(Deck deck);

private:

	Score m_score;
};

