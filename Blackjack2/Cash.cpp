#include <iostream>
#include "Cash.h"

Cash::Cash()
{
	m_betValue = 0;
	m_newCash = 0;
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

void Cash::PrintNewCash()
{
	std::cout << m_newCash;
}

void Cash::PrintBet()
{
	std::cout << m_betValue;
}

void Cash::AddToCash()
{
	m_totalCash=m_totalCash + m_betValue;
}

void Cash::MinusCash()
{
	m_totalCash= m_totalCash - m_betValue;
}

void Cash::ResetCash()
{
	m_totalCash = 1000;
}

void Cash::UpdateCash()
{
	m_newCash = m_totalCash;
}

int Cash::GetBetValue()
{
	return m_betValue;
}

void Cash::SetBetValue(int bet)
{
	m_betValue = bet;
}
