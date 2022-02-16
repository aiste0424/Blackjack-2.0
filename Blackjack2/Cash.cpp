#include <iostream>
#include "Cash.h"

Cash::Cash()
{
	m_bet = 10;
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

void Cash::PrintBet()
{
	std::cout << m_bet;
}

void Cash::AddToCash()
{
	m_totalCash = m_totalCash + m_bet;
}

void Cash::MinusCash()
{
	m_totalCash = m_totalCash - m_bet;
}

void Cash::ResetCash()
{
	m_totalCash = 1000;
}

void Cash::UpdateCash()
{
	m_bet = m_bet * 2;
}

int Cash::GetBetValue()
{
	return m_bet;
}

void Cash::SetBetValue(int bet)
{
	m_bet = bet;
}
