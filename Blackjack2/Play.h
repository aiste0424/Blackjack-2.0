#pragma once
#include <string>
#include "Deck.h"
#include "Dealer.h"
#include "Player.h"
#include "ErrorCatching.h"

class Play
{
public:

    //player gets two cards, dealer gets 1
    void TheDeal();

private:

    Deck m_deck;
    Dealer m_dealer;
    Player m_player;
    ErrorCatching m_error;
};