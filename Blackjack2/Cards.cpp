#include "Cards.h"

Cards::Cards()
{
    m_isTaken = false;
    m_type = static_cast<Type>(0);
    m_value = static_cast<Value>(0);
}

void Cards::SetType(Type type)
{
    m_type = type;
}

void Cards::SetValue(Value value)
{
    m_value = value;
}

bool Cards::GetIsTaken()
{
    return m_isTaken;
}

void Cards::SetIsTaken(bool taken)
{
    m_isTaken = taken;
}

Cards::Type Cards::GetType()
{
    return m_type;
<<<<<<< HEAD
}
=======
}

Cards::Value Cards::GetValue()
{
    return m_value;
}
>>>>>>> main
