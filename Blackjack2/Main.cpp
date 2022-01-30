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
		m_start.ShowIntroduction();
		m_play.TheDeal();
		m_play.MainGame();
		std::cout << "Would you like to play again? [0/1]";
		std::cin >> m_replay;
		m_error.ValidAnswer(m_replay);
		if (m_replay == static_cast<int>(Player::Choice::No))
		{
			isGameRunning = false;
		}
		else
		{
			m_play.Restart();
		}
	}
	
	return 0;
}