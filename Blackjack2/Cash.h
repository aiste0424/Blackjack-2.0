#pragma once
#include <iostream>
//=====================
//   MADE BY Simas   //
//=====================
class Cash
{
public:

	Cash();
	
	void SetCash(int cash); 
	void SetBetValue(int bet);  //set a value for your bet

	int GetCash();  //to make total cash appear on screen
	int GetBet(); //get a value of the current bet
	
	void WinCash(); // add bet value to total
	void LoseCash(); // reduces amount of coins at the end of a hand if lost
	void BlackjackPay();
	
	void ResetCash(); //replayability purposes
	void DoubleBet();
	void UpdateBJ();

private:

	int m_bets;	
	int m_maxBet;
	int m_totalCash;
	const int m_doubleBet = 2; //when player doubles their bet
};