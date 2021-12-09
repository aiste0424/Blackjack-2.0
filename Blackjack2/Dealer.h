#pragma once
#include "GameObject.h"
#include "Cards.h"

class Dealer: public GameObject
{
public:

	Dealer();
	virtual void DrawCard();
	virtual void PrintCurrentCardValue();
	virtual Cards::Value GetCurrentCardValue();


};

