#include "Cards.h"
#include <iostream>

Cards::Cards()
{
    m_isTaken = false;
    m_type = static_cast<Type>(0);
    m_value = static_cast<Value>(0);
}

bool Cards::GetIsTaken()
{
    return m_isTaken;
}

void Cards::SetIsTaken(bool isTaken)
{
    m_isTaken = isTaken;
}

void Cards::SetType(Type type)
{
    m_type = type;
}

void Cards::SetValue(Value value)
{
    m_value = value;
}
