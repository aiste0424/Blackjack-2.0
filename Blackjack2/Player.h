#pragma once
#include "Deck.h"
#include "Score.h"
#include "ErrorCatching.h"

class Player
{
public:

	Player();
	
	void DrawCard(Deck deck);
	bool MakeChoice(); //0 - no card; 1 - gimme one 

private:

	int answer;

	Score m_score;
	ErrorCatching m_error;
};

