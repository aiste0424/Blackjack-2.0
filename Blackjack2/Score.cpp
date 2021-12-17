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
//TODO: implement soft hand in the next assignment

void Score::PrintScore()
{
	std::cout << m_score << std::endl;
}

void Score::UpdateScore()
{
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
