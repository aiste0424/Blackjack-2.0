#pragma once
#include "GameObject.h"
#include "Deck.h"
#include "Score.h"


class Player
{
public:

	Player() {};
	void DrawCard(Deck deck);

	void PrintScore();

private:

	Score m_score;

};

