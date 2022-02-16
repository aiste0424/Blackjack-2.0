#include <iostream>
#include "Cash.h"

Cash::Cash()
{

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
	std::cout << m_bets;
}

void Cash::AddToCash()
{
	m_totalCash = m_totalCash + m_bets;
}

void Cash::MinusCash()
{
	m_totalCash = m_totalCash - m_bets;
}

void Cash::ResetCash()
{
	m_totalCash = 1000;
}

void Cash::UpdateCash()
{
	
}

int Cash::GetBetValue()
{
	return m_bets;
}

void Cash::SetBetValue(int bet)
{
	m_bets = bet;
}
