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
	bool IsBankrupt();

	void ResetScore(Score score);
	void ResetCash();
	void ShowCash();		//print m_totalCash value
	
	//===== Not used yet ======
	int GetCash(Cash cash);
	int GetBet(Cash bet);
	void LooseCash();
	void MakeChoice(Deck& deck);
	void WinCash();
	//void PickBet(Cash cash);
	//bool ValidBet();

private:

	int bets;
	int m_choice;

	Cash m_betValue;
	Cash m_totalCash;
	Deck m_deck;
	Score m_score;
	ErrorCatching m_error;
};