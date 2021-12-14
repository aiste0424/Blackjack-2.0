#include <iostream>
#include "Dealer.h"
#include "Deck.h"
#include "Play.h"
#include "Player.h"
#include "Score.h"
#include "Start.h"

int main()
{
	Play m_play;
	Start m_start;
	
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