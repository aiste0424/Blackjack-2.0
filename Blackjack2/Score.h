#pragma once
#include "Cards.h"

class Score
{
public:

	int SetScore();
	int AddScore();

	int GetScore();
	int NewScore(int newScore);

	Cards::Value GetValue(int value);

private:

	int m_score;
	int m_newScore;
	int m_value;

};

