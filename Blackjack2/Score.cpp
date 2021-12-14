#include "Score.h"

Score::Score()
{
    m_newScore = 0;
    m_score = 0;
}

int Score::GetScore()
{
    return m_newScore;
}

void Score::AddScore()
{
    m_newScore = m_score + m_value;
}

void Score::SetScore(int score)
{
    m_score = score;
}

Cards::Value Score::GetValue()
{
    return static_cast<Cards::Value>(m_value);
}