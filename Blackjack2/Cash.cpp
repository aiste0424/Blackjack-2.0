#include "Cash.h"

Cash::Cash()
{
	m_bets = 0;
	m_totalCash = 100;	
	m_maxBet = m_totalCash;	
}

int Cash::GetCash()
{
	return m_totalCash;
}

void Cash::SetCash(int cash)
{
	m_totalCash = cash;
}

void Cash::WinCash()   //this works, but not with the doubled bet
{
	m_totalCash = m_totalCash + m_bets;
}

void Cash::LoseCash()    //same happens as with the added bet
{
	m_totalCash = m_totalCash - m_bets;
}

void Cash::BlackjackPay()
{
	m_totalCash = m_totalCash + m_bets;
}

void Cash::ResetCash()
{
	m_totalCash = 100;
}
//double bet
void Cash::DoubleBet()
{
	m_bets = m_bets * m_doubleBet;
}
//after getting a blackjack
void Cash::UpdateBJ()
{
	m_bets = m_bets * 1.5;
}

int Cash::GetBet()
{
	return m_bets;
}

void Cash::SetBetValue(int bet)
{
	m_bets = bet;
}
