#include "Score.h"

int Score::SetScore()
{
    m_score = 0;
    return m_score;
}

int Score::AddScore()
{
    m_newScore = m_score + m_value;
    
    return m_newScore;
}

int Score::GetValue(Cards::Value)
{
    return m_value;
}

//int Score::GetScore()
//{
//    return m_newScore;
//}

//int Score::NewScore(Cards::Value& newScore)
//{
//    return m_newScore;
//}

