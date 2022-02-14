#include <iostream>
#include "Cash.h"

Cash::Cash()
{
	m_betValue = 10;
	m_totalCash = 100;
}

int Cash::GetCash()
{
	return m_totalCash;
}

void Cash::SetCash(int cash)
{
	m_totalCash = cash;
}

void Cash::PrintCash()
{
	std::cout << m_totalCash;
}

void Cash::AddToCash()
{
	m_totalCash = m_totalCash + m_betValue;
}

void Cash::MinusCash()
{
	m_totalCash = m_totalCash - m_betValue;
}

void Cash::ResetCash()
{
	m_totalCash = 0;
}

int Cash::GetBetValue()
{
	return m_betValue;
}
