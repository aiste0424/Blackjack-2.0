#pragma once
#include "Deck.h"
#include "Player.h"
#include "Score.h"
#include <string>
#include <iostream>

//=================================
//      MADE BY Gergo Varga      //
//=================================

class DoublesSplits
{
public:

	DoublesSplits();

	void DoubleDown(Player player, Score score);
	void Split(Player player, Score score);		

private:

	int m_choice;
	bool m_doubleDown;
	bool m_split;

	Score m_score;
	Player m_player;
	Deck m_deck;
	ErrorCatching m_error;

};