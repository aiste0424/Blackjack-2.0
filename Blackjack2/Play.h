#pragma once

#include <string>
#include "ErrorCatching.h"
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"

class Play
{
public:

	//both player and the dealer get two cards at the start
	void TheBeginning();




private:

	Dealer m_dealer;
	Player m_player;
	Deck m_deck;
};

