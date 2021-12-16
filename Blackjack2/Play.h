#pragma once
#include "Deck.h"
#include "Dealer.h"
#include "Player.h"
#include "ErrorCatching.h"
#include "Score.h"

class Play
{
public:

    Play();

    //player gets two cards, dealer gets 1
    void TheDeal();


private:

    Deck m_deck;
    Dealer m_dealer;
    ErrorCatching m_error;
    Player m_player;
    Score m_score;

};