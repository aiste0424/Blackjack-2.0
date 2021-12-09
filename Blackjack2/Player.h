#pragma once
#include "GameObject.h"

class Player : public GameObject
{
public:

	Player();
	virtual void DrawCard();
	virtual void PrintCurrentCardValue();
	virtual Cards::Value GetCurrentCardValue();


};

