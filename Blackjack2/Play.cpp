#include "Play.h"
#include <iostream>

void Play::TheBeginning()
{
	m_player.DrawCard(m_deck);
	m_deck.CardTaken();
	system("pause");

	m_dealer.DrawCard(m_deck);
	m_deck.CardTaken();
	system("pause");
	system("CLS");
}
