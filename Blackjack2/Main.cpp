#include "Start.h"
#include "Play.h"
#include <iostream>

int main()
{
	Start m_start;
	Play m_play;
	bool isGameRunning = true;

	m_start.Introduction();

	while (isGameRunning)
	{
		
		m_play.DrawCard();
		m_play.PrintCurrentCardValue();
		m_play.PrintCurrentCardType();
		m_play.PrintPicture();
	}
	
	system("pause");
	return 0;
}