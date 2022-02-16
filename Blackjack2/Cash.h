#pragma once
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

	void PrintCash(); //to print your total on screen
	void PrintBet();  //to print your current bet on screen
	
	void AddToCash(); // add bet value to total
	void MinusCash(); // reduces amount of coins at the end of a hand if lost	
	
	void ResetCash(); //replayability purposes
	void UpdateBet(); //updating bet in case of split or double	

	//void UpdateBetValue(); //maybe needed if doubled ???
	bool ValidBet();

private:

	int m_maxBet;
	int m_bets;	
	int m_totalCash;
};