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
    //do you wish to get extra card?
    void TheChoice();

private:

    Deck m_deck;
    Dealer m_dealer;
    Player m_player;
    ErrorCatching m_error;
    Score m_score;

};