#include <iostream>
#include "Score.h"
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
Score::Score()
{
	m_score = 0;
	m_cardValue = 0;
}

void Score::SetCardValue(int value)
{
	m_cardValue = value;
}

void Score::PrintScore()
{
	std::cout << m_score << std::endl;
}

void Score::UpdateScore()
{
	//the default ace value is 11, but if the hand busts, ace value changes to 1.
	if (m_cardValue == 11 && m_score + m_cardValue > 21)
	{
		m_cardValue = 1;
	}
	m_score = m_score + m_cardValue;
}

int Score::GetScore()
{
	return m_score;
}

void Score::SetScore(int score)
{
	m_score = score;
}
