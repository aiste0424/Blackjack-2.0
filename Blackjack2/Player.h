#pragma once
#include "GameObject.h"
#include "Deck.h"


class Player
{
public:

	Player() {};
	void DrawCard(Deck deck);
	void CountScore(Score m_score);
	void PrintScore(Score m_score);
};

