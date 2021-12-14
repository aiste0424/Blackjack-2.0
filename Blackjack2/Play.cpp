#include "Play.h"
#include <iostream>

//dealer deals 1 card to the player, one to himself,
//one to the player and one to himself. The secondcard that the dealer got is face down.
void Play::TheDeal()
{
    //one card to player, then dealer, then player again
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();
    m_player.PrintScore();
    //one card for dealer
    m_dealer.DrawCard(m_deck);
    m_deck.CardTaken();

    //one for player
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();
    m_player.PrintScore();

    system("pause");
}
