#include "Start.h"
#include "Play.h"
#include "ErrorCatching.h"
#include <iostream>

//=================================
//   MADE BY Aiste Simonaityte   //
//=================================

int main()
{
	Play m_play;
	Start m_start;
	ErrorCatching m_error;
	int m_replay;
	bool isGameRunning = true;

	while (isGameRunning)
	{	
		m_start.ShowIntroduction(); // introduces the game

		//play game while you have money
		while (m_play.EnoughHoney()==true);
		{
			m_play.TheDeal(); // player see first 3 cards and has to make a bet based on those cards
			m_play.TheBet(); // since you have money -> make a bet
			m_play.MainGame();
		}
		//no more money - restart
		m_play.Restart();
	
	}
	
	return 0;
}