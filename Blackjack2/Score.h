#pragma once
#include "Cards.h"

class Score
{
public:

	Score();

	int GetScore();

	void AddScore();
	void SetScore(int score);
	void UpdateScore();


	Cards::Value GetValue();
	Cards::Value GetCurrentCardValue();

private:

	int m_previousScore;
	int m_newScore;
	int m_value;

};

