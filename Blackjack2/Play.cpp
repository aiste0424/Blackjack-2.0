#include "Play.h"
#include <iostream>

Play::Play()
{

}

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
    m_blackjack.IsBlackjack(m_player, m_dealer, m_score);   //Checks if player has blackjack // Gergo

    //============== Make a choice ========== 
    //GERGO  
    while (m_player.GetChoice() == 1 ||   //loop player choices  Yes/No
        m_player.GetScore(m_score) < 21)     //this line is the reason why it inappropriatry offers another card at the end of some hands.
    {
        m_player.MakeChoice(m_deck);

        if (m_player.GetScore(m_score) > 21)      //If the player asks for another card, and busts - Lose function
        {
            m_lose.Lose(m_player, m_dealer, m_score);
        }

        if (m_player.GetChoice() == 0)  //If player chooses no more cards, dealer pulls cards until reaches 17, or bust
        {
            do {
                m_dealer.DrawCard(m_deck);      //Dealer automatically draws cards untill reaches 17
                m_deck.CardTaken();

            } while (m_dealer.GetScore(m_score) < 17);

            if (m_dealer.GetScore(m_score) <= 17 &&   //Defining possible win conditions after player chooses no more cards
                m_player.GetScore(m_score) <= 21 &&
                m_player.GetScore(m_score) > m_dealer.GetScore(m_score) ||
                m_dealer.GetScore(m_score) > 21 &&
                m_player.GetScore(m_score) <= 21)
            {
                m_win.Win(m_player, m_dealer, m_score);
            }
            else if (m_player.GetScore(m_score) ==  //Defining Tie conditions after player chooses no more cards
                     m_dealer.GetScore(m_score))
                 {
                     m_draw.Draw(m_player, m_dealer, m_score);
                 }
            else   //Any other case than the above, player loses
            {
                m_lose.Lose(m_player, m_dealer, m_score);
            }
        }
    }
    system("pause");
}