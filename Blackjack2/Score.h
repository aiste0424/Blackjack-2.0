#pragma once
#include "Cards.h"

class Score
{
public:

	int SetScore(int score);
	int AddScore();

	Cards::Value GetValue();

private:

	int m_score;
	int m_newScore;
	int m_value;

};

