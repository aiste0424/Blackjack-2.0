#pragma once
#include "Deck.h"
#include "Score.h"

class GameObject
{
public:
	//needs to inherit
	//pure virtual function
	//ABC - abstract base class
	virtual void DrawCard(Deck deck) = 0;

//visible to the children classes, but private to the rest
protected:
	Score m_score;
};

