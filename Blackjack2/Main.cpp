#include "Start.h"
#include "Play.h"
#include "ValidInputCheck.h"
#include <iostream>

//=================================
//   MADE BY Aiste Simonaityte   //
//=================================

int main()
{
	Play* m_play = new Play;
	Start* m_start = new Start;
	ValidInputCheck* m_error = new ValidInputCheck;
	Doubles* m_doubles = new Doubles;
	bool isGameRunning = true;
	

	while (isGameRunning)
	{	
		m_start->ShowIntroduction(); // introduces the game
				
		m_play->TheBet();
		m_play->TheDeal(*m_doubles); // player see first 3 cards and has to make a bet based on those cards
		//if bets are doubled, main game needs to change
		m_play->MainGame();
		m_play->Restart(); //reset scores
	}	
	return 0;
}