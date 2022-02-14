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
		m_play.EnoughHoney();

			m_play.TheDeal(); // player see first 3 cards and has to make a bet based on those cards
			
			m_play.MainGame();
		
		//	m_play.Restart(); //reset scores
	
	}
	
	return 0;
}