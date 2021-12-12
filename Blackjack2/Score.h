#pragma once
#include "Cards.h"

class Score
{
public:

	int SetScore();
	int AddScore();

	//int GetScore();
	//int NewScore(Cards::Value& newScore);
	int GetValue(Cards::Value);

private:

	int m_score;
	int m_newScore;
	int m_value;

};

