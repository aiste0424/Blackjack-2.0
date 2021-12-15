#pragma once
#include "Deck.h"
#include "Score.h"
#include "ErrorCatching.h"

class Player
{
public:

	Player();
	void DrawCard(Deck deck);
	void MakeChoice(Deck deck);


private:

	int answer;

	Score m_score;
	ErrorCatching m_error;
};

