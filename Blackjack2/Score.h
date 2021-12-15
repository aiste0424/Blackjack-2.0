#pragma once
#include "Cards.h"

class Score
{
public:

	Score();

	int GetScore();
	void AddScore();
	void UpdateScore();

	void SetScore(int score);
	

private:

	int m_previousScore;
	int m_newScore;
	int m_value;


};

