#pragma once
#include "Deck.h"
#include "Dealer.h"
#include "Player.h"
#include "Outcomes.h"
#include "ErrorCatching.h"
#include "Score.h"

class Play
{
public:

    Play();

    void TheDeal();   //player gets two cards, dealer gets 1. Order of the cards dealt: player -> dealer -> player.


private:

    Deck m_deck;
    Score m_score;
    Dealer m_dealer;
    Player m_player;
    Outcomes m_win;
    Outcomes m_lose;
    Outcomes m_draw;
    Outcomes m_blackjack;
    ErrorCatching m_error;
};