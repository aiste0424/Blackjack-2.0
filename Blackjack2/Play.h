#pragma once
#include "Cash.h"
#include "Deck.h"
#include "Score.h"
#include "Dealer.h"
#include "Player.h"
#include "Outcomes.h"
#include "DoublesSplits.h"
#include "ErrorCatching.h"

class Play
{
public:
    //Aiste's functions
    //player gets two cards, dealer gets 1. Order of the cards dealt: player -> dealer -> player.
    void TheDeal(DoublesSplits doubles);
    void PauseClear();
    void PlayerTurn();
    void DealerTurn();
    void Restart();

    //Gergo's function
    void MainGame();

    //Simas's function
    bool EnoughHoney();
    void TheBet();

private:
    
    int bet;
    Cash m_cash;
    Deck m_deck;
    Score m_score;
    Dealer m_dealer;
    Player m_player;
    Outcomes m_outcome;
    ErrorCatching m_error;
    DoublesSplits m_doubles;
};