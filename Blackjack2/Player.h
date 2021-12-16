#pragma once
#include "Deck.h"
#include "Score.h"
#include "ErrorCatching.h"

class Player
{
public:

	Player();

	int GetScore(Deck deck);

	void DrawCard(Deck deck);
	void MakeChoice(Deck deck);


private:

	int answer;

	Deck m_deck;
	Score m_score;
	ErrorCatching m_error;
};

