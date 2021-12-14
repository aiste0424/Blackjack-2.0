#include "Score.h"

Score::Score()
{
    m_newScore = 0;
    m_score = 0;
    m_value = 0;
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

Cards::Value Score::GetValue()
{
    return m_value;
}