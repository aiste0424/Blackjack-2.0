#pragma once
#include "Deck.h"
#include "Score.h"
#include "ErrorCatching.h"

class Player
{
public:

	enum class Choice
	{
		No,
		Yes
	};

	Player();

	int GetScore(Score score);   //Gergo did this function to pull player/dealer score for the outcomes
	int GetChoice();   //Gergo did this function to pull player input for the outcomes in Play class

	void DrawCard(Deck deck);
	void MakeChoice(Deck deck); //0 - no card; 1 - gimme one Simas

private:

	int m_choice;

	Deck m_deck;
	Score m_score;
	ErrorCatching m_error;
};