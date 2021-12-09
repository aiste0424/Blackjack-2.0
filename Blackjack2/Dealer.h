#pragma once
#include "GameObject.h"
#include "Cards.h"
#include "Deck.h"
#include "ErrorCatching.h"

class Dealer
{
public:

	Dealer() {};
	void DrawCard(Deck& deck);
};

