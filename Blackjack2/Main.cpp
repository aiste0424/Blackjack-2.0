#include "Start.h"
#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"
#include "Score.h"
#include "Play.h"

int main()
{
	Start m_start;
	Score m_score;

		m_score.AddScore();

		Play m_play;

	
	bool isGameRunning = true;
	m_start.Introduction();

	while (isGameRunning)
	{	
		//system("CLS");
		
		//call the function twice, because they each get 2 cards in the beginning
		m_play.TheBeginning();
		m_play.TheBeginning();

	}
	
	
	return 0;
}