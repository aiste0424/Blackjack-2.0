#include "Start.h"
#include "Play.h"
#include "Player.h"
#include "Score.h"
#include "Start.h"

int main()
{
	Play m_play;
	Start m_start;

	bool isGameRunning = true;

	m_start.ShowIntroduction();

	while (isGameRunning)
	{	
		m_play.TheDeal();
	}
	
	return 0;
}