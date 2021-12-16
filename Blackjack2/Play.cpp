#include "Play.h"
#include <iostream>

Play::Play()
{

}

//dealer deals 1 card to the player, one to himself,
//one to the player and one to himself. The second card that the dealer got is faced down.
void Play::TheDeal()
{
    //one card to player, then dealer, then player again

    //============== 1st card to PLAYER ==========
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();
 
    //============== 1st card for DEALER =========
    m_dealer.DrawCard(m_deck);
    m_deck.CardTaken();

    //============== 2nd card for DEALER =========
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();

    //============== Does Player have a BLACKJACK ==========
    m_blackjack.IsBlackjack(m_player, m_dealer, m_deck);   //Checks if player has blackjack


    //============== Make a choice ==========
    m_player.MakeChoice(m_deck);

    system("pause");
}
//TODO: first dealer card should stay without a new card untill player says no more cards
//TODO: if player wants a card, they should only get 1 at a time
