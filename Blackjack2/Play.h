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

    //player gets two cards, dealer gets 1
    void TheDeal();
    //do you wish to get extra card?
    void TheChoice();

private:

    Deck m_deck;
    Dealer m_dealer;
    Player m_player;
    Score m_score;
    ErrorCatching m_error;
    Outcomes m_blackjack;


};