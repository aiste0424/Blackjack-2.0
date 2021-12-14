#include <iostream>
#include "Score.h"


Score::Score()
{
    m_newScore = 0;
    m_score = 0;
    m_value = 2;
    m_points = 0;
}

int Score::GetScore()
{
    return m_newScore;
}

void Score::AddScore()
{
    m_newScore = m_previousScore + m_value;
}

void Score::SetScore(int score)
{
    m_newScore = score;
}

void Score::UpdateScore()
{
    m_score = m_newScore;
}

void Score::Switch()
{
	switch (static_cast<Cards::Value>(m_value))
	{
	case Cards::Value::Two:
		m_points = 2;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Three:
		m_points = 3;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Four:
		m_points = 4;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Five:
		m_points = 5;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Six:
		m_points = 6;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Seven:
		m_points = 7;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Eight:
		m_points = 8;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Nine:
		m_points = 9;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Ten:
		m_points = 10;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Jack:
		m_points = 10;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Queen:
		m_points = 10;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::King:
		m_points = 10;
		std::cout << m_points << std::endl;
		break;

	case Cards::Value::Ace:
		m_points = 1;
		std::cout << m_points << std::endl;
		break;

	default:
		m_points = 100;
		break;
	}
}

void Score::UpdateSwitch()
{

}

Cards::Value Score::GetValue()
{
    return m_value;
}

Cards::Value Score::GetCurrentCardValue()
{
	return (static_cast<Cards::Value>(m_value));
}
