#include "Play.h"
#include <iostream>

void Play::TheBeginning()
{
    //One card for player
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();
    
    m_player.PrintScore();
    system("pause");

    //one card for dealer
    m_dealer.DrawCard(m_deck);
    m_deck.CardTaken();

    system("pause");

    system("CLS");
}