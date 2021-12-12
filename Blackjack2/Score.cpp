#include "Score.h"

int Score::SetScore(int score)
{
    m_score = score;
    m_score = 0;
    m_newScore = 0;
    
    return m_score;
}

int Score::AddScore()
{
    m_newScore = m_score + m_value;
    
    return m_newScore;
}

Cards::Value Score::GetValue()
{
    return static_cast<Cards::Value>(m_value);
}