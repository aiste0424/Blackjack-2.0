#include "Outcomes.h"

//TODO: figure out how to implement blackjack in the conditions
//TODO: implement these functions at the correct place
//TODO: do PrintResult() -> do we even need that? discuss.
Outcomes::Outcomes()
{
    m_win = false;
    m_lose = false;
    m_draw = false;
    m_blackjack = false;
}

void Outcomes::SetResult(bool win, bool lose, bool draw, bool blackjack)
{
    m_win = win;
    m_lose = lose;
    m_draw = draw;
    m_blackjack = blackjack;
}

//void WinLoseDrawCond::SetScore(int score)
//{
//
//}

bool Outcomes::Win(Player player, Dealer dealer, Deck deck)
{
    if (dealer.GetScore(deck) < player.GetScore(deck) < 22 ||
        dealer.GetScore(deck) > 21 && player.GetScore(deck) < 22)
    {
        return m_win = true;
        std::cout << "Player wins!" << std::endl;
    }
}

bool Outcomes::Lose(Player player, Dealer dealer, Deck deck)
{
    if (player.GetScore(deck) < dealer.GetScore(deck) < 22 ||
        player.GetScore(deck) > 21)
    {
        return m_lose = true;
        std::cout << "House wins!" << std::endl;
    }
}

bool Outcomes::Draw(Player player, Dealer dealer, Deck deck)
{
    if (dealer.GetScore(deck) == player.GetScore(deck))
    {
        return m_draw = true;
        std::cout << "It's a Stand-off!" << std::endl;
    }
}

void Outcomes::IsBlackjack(Player player, Dealer dealer, Deck deck)
{
    if (player.GetScore(deck) == 21 ||
        dealer.GetScore(deck) == 21)
    {
        m_blackjack = true;
        std::cout << "You have a BLACKJACK!" << std::endl;
    }
}

void Outcomes::PrintResult()
{

}
