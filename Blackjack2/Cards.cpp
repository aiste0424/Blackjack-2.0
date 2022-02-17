#include "Cards.h"
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
Cards::Cards()
{
    m_value = 0;
    m_isTaken = false;
    m_suit = static_cast<Suit>(0);
    m_rank = static_cast<Rank>(0);
}

void Cards::SetSuit(Suit suit)
{
    m_suit = suit;
}

void Cards::SetRank(Rank rank)
{
    m_rank = rank;
}

void Cards::SetValue(int value)
{
    m_value = value;
}

void Cards::SetIsTaken(bool taken)
{
    m_isTaken = taken;
}

int Cards::GetValue()
{
    return m_value;
}

Cards::Suit Cards::GetSuit()
{
    return m_suit;
}

Cards::Rank Cards::GetRank()
{
    return m_rank;
}

bool Cards::GetIsTaken()
{
    return m_isTaken;
}
