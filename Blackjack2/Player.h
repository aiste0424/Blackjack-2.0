#pragma once
#include "Cash.h"
#include "Deck.h"
#include "Score.h"
#include "ErrorCatching.h"

class Player
{
public:
	//Aiste's enum class and 2 functions
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
	void ResetScore(Score score);
	void ShowCash();		//print m_totalCash value
	void ShowNewCash();     //print m_newCash value
	void LooseCash();
	void WinCash();

	bool IsBankrupt();

	void ResetCash();
	int GetCash(Cash totalCash);
	void PickBet(Cash betValue);

private:

	int bet;
	int m_choice;

	Cash m_betValue;
	Cash m_totalCash;
	Cash m_newCash;
	Deck m_deck;
	Score m_score;
	ErrorCatching m_error;
};