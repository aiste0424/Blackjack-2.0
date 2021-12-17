#pragma once
#include <iostream>
#include <string>
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

class Outcomes
{

public:

	Outcomes();

	void SetResult(bool win, bool lose, bool draw, bool blackjack);
	void SetScore(int score) {};

	bool Win(Player player, Dealer dealer, Deck deck);
	bool Lose(Player player, Dealer dealer, Deck deck);
	bool Draw(Player player, Dealer dealer, Deck deck);
	bool IsBlackjack(Player player, Dealer dealer, Deck deck); //changed from void to bool, Simas

	void PrintResult();

private:

	bool m_win;
	bool m_lose;
	bool m_draw;
	bool m_blackjack;
};