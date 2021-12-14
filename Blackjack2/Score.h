#pragma once
#include "Cards.h"

class Score
{
public:

	Score();
	int GetScore();
	void AddScore();
	void SetScore(int score);
	int GetValue();


private:

	int m_previousScore;
	int m_newScore;
	int m_value;

};

