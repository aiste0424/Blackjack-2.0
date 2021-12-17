#include <iostream>
#include "Score.h"

Score::Score()
{
	m_cardValue = 0;
	m_score = 0;
}

void Score::SetCardValue(int value)
{
	m_cardValue = value;
}

void Score::PrintScore()
{
	std::cout << "POINTS: " << m_score << std::endl;
}

void Score::CountScore()
{
	m_score = m_score + m_cardValue;
}

int Score::GetScore()
{
	return m_score;
}