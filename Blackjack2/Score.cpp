#include <iostream>
#include "Score.h"


Score::Score()
{
    m_previousScore = 10;
    //m_value = static_cast<int>(Cards::m_value);
    m_value = 2;
    m_newScore = 100;
}

int Score::GetScore()
{
    return m_newScore;
}

void Score::AddScore()
{
    m_previousScore = m_previousScore + m_value;
}

void Score::SetScore(int score)
{
    m_previousScore = score;
}

void Score::UpdateScore()
{
    m_newScore = m_previousScore;
}
