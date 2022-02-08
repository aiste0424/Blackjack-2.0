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
	void AddToCash(); // add bet value to cash
	void MinusCash(); // take away bet value from cash
	void ResetCash();//replayability purposes

	//get a value of the current bet 
	int GetBetValue();
	//void UpdateBetValue(); //maybe needed if doubled ???


private:

	int m_bet[4] = { 5, 10, 20, 50 }; //possible variations to bet. indexes 0,1,2,3
	int m_betValue;
	int m_totalCash;
};