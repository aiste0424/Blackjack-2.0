#pragma once
#include <iostream>
#include <string>
#include "Cash.h"
#include "Deck.h"
#include "Score.h"
#include "Player.h"
#include "Dealer.h"
#include "Start.h"
#include "DoublesSplits.h"

//=================================
//      MADE BY Gergo Varga      //
//=================================

class Outcomes
{
public:

	Outcomes();

	void SetResult(bool win, bool lose, bool draw, bool blackjack); //setting all to false by default

	void Win(Player player, Dealer dealer, Score score, Cash cash, DoublesSplits doubles);   //I needed to inherit player, dealer and score as factors of the outcome
	void Lose(Player player, Dealer dealer, Score score, Cash cash, DoublesSplits doubles);
	void Draw(Player player, Dealer dealer, Score score, Cash cash);
	void IsBlackjack(Player player, Dealer dealer, Score score, Cash cash); //Checking for blackjacks

private:

	bool m_win;
	bool m_lose;
	bool m_draw;
	bool m_blackjack;
};