#pragma once
#include "Cash.h"
#include "Deck.h"
#include "Score.h"
#include "Dealer.h"
#include "Player.h"
#include "Outcomes.h"
#include "Doubles.h"
#include "ValidInputCheck.h"

class Play
{
public:
    //Aiste's functions
    //player gets two cards, dealer gets 1. Order of the cards dealt: player -> dealer -> player.
    void TheDeal(Doubles doubles);
    void Double();
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
    
    int m_bet = 0;
    Cash m_cash;
    Deck m_deck;
    Score m_score;
    Dealer m_dealer;
    Player m_player;
    Outcomes m_outcome;
    ValidInputCheck m_error;
    Doubles m_doubles;
};