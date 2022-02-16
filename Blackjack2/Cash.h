#pragma once
//=================================
//   MADE BY Simas   //
//=================================
class Cash
{
public:

	Cash();

	
	int GetCash();
	void SetCash(int cash);
	void PrintCash();
	void PrintNewCash();
	void PrintBet();

	void AddToCash(); // add bet value to cash
	void MinusCash(); // take away bet value from cash
	
	void ResetCash();//replayability purposes
	void UpdateCash();//keeping up-to-date cash
	//get a value of the current bet 
	int GetBetValue();
	//set a value for your bet
	void SetBetValue(int bet);
	//void UpdateBetValue(); //maybe needed if doubled ???


private:

	int m_bet; //possible variations to bet. indexes 0,1,2,3 // 
	
	int m_betValue;
	int m_newCash;
	int m_totalCash;

};