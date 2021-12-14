#include "Start.h"
#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"
#include "Score.h"

int main()
{
	Start m_start;
	Dealer m_dealer;
	Player m_player;
	Deck m_deck;

	Score m_score;
	//	m_score.SetScore(0);
		m_score.AddScore();
	
	bool isGameRunning = true;

	m_start.Introduction();

	while (isGameRunning)
	{

		m_player.DrawCard(m_deck);
		m_player.CountScore(m_score);

		system("pause");

		m_dealer.DrawCard(m_deck);
		system("pause");
		
		
		//system("CLS");
	}
	
	
	return 0;
}