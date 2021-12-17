#pragma once
#include <iostream>
#include <string>
#include "Deck.h"
#include "Score.h"
#include "Player.h"
#include "Dealer.h"
#include "Start.h"

//Gergo's class, defining win/lose conditions
class Outcomes
{
public:

	Outcomes();

	void SetResult(bool win, bool lose, bool draw, bool blackjack); //setting all to false by default

	void Win(Player player, Dealer dealer, Score score);   //I needed to inherit player, dealer and score as factors of the outcome
	void Lose(Player player, Dealer dealer, Score score);
	void Draw(Player player, Dealer dealer, Score score);
	void IsBlackjack(Player player, Dealer dealer, Score score); //Checking for blackjacks

private:

	Start m_start;  //This is just for after the hands to start a new hand with this maybe, but not necessary.
	Dealer m_dealer;
	Player m_player;

	bool m_win;
	bool m_lose;
	bool m_draw;
	bool m_blackjack;
};