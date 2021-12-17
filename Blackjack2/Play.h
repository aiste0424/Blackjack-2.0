#pragma once
#include "Deck.h"
#include "Score.h"
#include "Dealer.h"
#include "Player.h"
#include "Outcomes.h"
#include "ErrorCatching.h"

class Play
{
public:
    //Aiste's functions
    //player gets two cards, dealer gets 1. Order of the cards dealt: player -> dealer -> player.
    void TheDeal();
    void PauseClear();
    void PlayerTurn();
    void DealerTurn();
    void Restart();

    //Gergo's function
    void MainGame();

private:

    Deck m_deck;
    Score m_score;
    Dealer m_dealer;
    Player m_player;
    Outcomes m_outcome;
    ErrorCatching m_error;
};