#include "Start.h"
#include "Play.h"

int main()
{
	Play m_play;
	Start m_start;
	bool isGameRunning = true;

	while (isGameRunning)
	{	
		m_start.ShowIntroduction();
		m_play.TheDeal();
		m_play.MainGame();
	}
	
	return 0;
}