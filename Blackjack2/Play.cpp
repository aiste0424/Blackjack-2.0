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

    //============== 2nd card for PLAYER =========
    m_player.DrawCard(m_deck);
    m_deck.CardTaken();

    //============== Does Player have a BLACKJACK ==========
    if (m_blackjack.IsBlackjack(m_player, m_dealer, m_deck) == true)//Checks if player has blackjack
    {
        m_blackjack.Win(m_player, m_dealer, m_deck);

    }
    else
    {
        //============== 2nd card for DEALER =========
        m_dealer.DrawCard(m_deck);
        m_deck.CardTaken();
    
        //if (m_dealer.IsBlackjack(m_player, m_dealer, m_deck)==true)

        //============== Make a choice ========== 
        if (m_player.MakeChoice() == 0) //player doesn't want a card
        {
            //start dealing for the dealer
            std::cout<<"Player gets no more cards"<<std::endl;
        }
        else //player wants a card
        {
            for (int i = 0; m_deck.GetValue() <= 21; i++)
            {
                m_player.DrawCard(m_deck);
                system("pause");
            }
        }
    }
    system("pause");
}
//TODO: first dealer card should stay without a new card untill player says no more cards
//TODO: if player wants a card, they should only get 1 at a time
