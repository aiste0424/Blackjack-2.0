#include <iostream>
#include "Cash.h"

Cash::Cash()
{
	m_totalCash = 100;
	
	m_maxBet = m_totalCash + 1;
	
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
	m_totalCash = 100;
}

void Cash::UpdateBet()
{
	m_bets = m_bets * 2;
}


int Cash::GetBet()
{
	return m_bets;
}

void Cash::SetBetValue(int bet)
{
	m_bets = bet;
}

bool Cash::ValidBet()
{
	if (m_bets > 9  && m_bets < m_maxBet)
	{
		return true;
	}
	else
	{
		std::cout << "The bet has to be the multiples of 10. Please enter a valid bet." << std::endl;
		return false;
	}
}
