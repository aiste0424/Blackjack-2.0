#include "Start.h"
#include <iostream>
#include "Play.h"

int main()
{
	Start m_start;
	Play m_play;
	
	bool isGameRunning = true;
	m_start.Introduction();

	while (isGameRunning)
	{
		
		//call the function twice, because they each get 2 cards in the beginning
		m_play.TheBeginning();
		m_play.TheBeginning();

	}
	
	
	return 0;
}