#pragma once
#include "Cash.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "Score.h"
#include <string>
#include <iostream>

//=================================
//      MADE BY Gergo Varga      //
//=================================

class Doubles
{
public:

	Doubles();
	bool IsDouble();
	void DoubleDown(Player* player, Score score, Cash cash);

private:

	bool m_split;
	int m_choice;
	bool m_doubleDown;

	Deck m_deck;
	Score m_score;
	Player m_player;
	ValidInputCheck m_error;
};