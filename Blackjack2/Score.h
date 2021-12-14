#pragma once
#include "Cards.h"

class Score
{
public:

	Score();
	int GetScore();
	void AddScore();
	void SetScore(int score);
	Cards::Value GetValue();


private:

	int m_score;
	int m_newScore;
	int m_value;

};

