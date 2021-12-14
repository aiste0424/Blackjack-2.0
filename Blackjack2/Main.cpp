#include "Start.h"
#include <iostream>
<<<<<<< HEAD
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"
#include "Score.h"
=======
#include "Play.h"
>>>>>>> main

int main()
{
	Start m_start;
<<<<<<< HEAD
	Dealer m_dealer;
	Player m_player;
	Deck m_deck;

	Score m_score;
	//	m_score.SetScore(0);
		m_score.AddScore();
=======
	Play m_play;
>>>>>>> main
	
	bool isGameRunning = true;
	m_start.Introduction();

	while (isGameRunning)
	{
<<<<<<< HEAD

		m_player.DrawCard(m_deck);
		m_player.CountScore(m_score);

		system("pause");

		m_dealer.DrawCard(m_deck);
		system("pause");
		
		
		//system("CLS");
=======
		
		//call the function twice, because they each get 2 cards in the beginning
		m_play.TheBeginning();
		m_play.TheBeginning();

>>>>>>> main
	}
	
	
	return 0;
}