#include "Score.h"

int Score::SetScore()
{
    m_score = 0;
    return m_score;
}

int Score::AddScore()
{
    m_newScore = m_value + m_score;
    return m_newScore;
}

int Score::GetScore()
{
    return m_newScore;
}

int Score::NewScore(int newScore)
{
    return m_newScore;
}

Cards::Value Score::GetValue(int value)
{
    return Cards::Value();
}
