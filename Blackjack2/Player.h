#pragma once
#include "Deck.h"
#include "Score.h"
#include "ErrorCatching.h"

class Player
{
public:

	//Aiste's
	enum class Choice
	{
		No,
		Yes
	};

	Player();
	void DrawCard(Deck& deck);

	//Gergo's functions
	int GetScore(Score score);   //pulls player/dealer score for the outcomes
	int GetChoice();			//pulls players input for the outcomes in Play class

	//Simas' function
	void MakeChoice(Deck& deck);

private:

	int m_choice;

	Deck m_deck;
	Score m_score;
	ErrorCatching m_error;
};