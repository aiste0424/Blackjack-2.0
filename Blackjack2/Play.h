#pragma once

#include <string>
#include "ErrorCatching.h"
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"

class Play
{
public:

<<<<<<< HEAD
	Play();
    void DrawCard();
    void CountScore();

    void PrintPicture();

    void PrintCurrentCardType();
    Cards::Value GetCurrentCardValue();
    void PrintCurrentCardValue();

private:

    std::string symbol;
    ErrorCatching m_error;

    int m_randomType;
    int m_randomValue;
=======
	//both player and the dealer get two cards at the start
	void TheBeginning();
>>>>>>> main




private:

	Dealer m_dealer;
	Player m_player;
	Deck m_deck;
};

