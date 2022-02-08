#include "Outcomes.h"
//=================================
//      MADE BY Gergo Varga      //
//=================================
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

void Outcomes::Win(Player player, Dealer dealer, Score score)
{
    if (dealer.GetScore(score) < player.GetScore(score) &&
		player.GetScore(score) < 22 ||
        dealer.GetScore(score) > 21 &&
		player.GetScore(score) < 22)
    {
        m_win = true;
        player.ResetScore(score);
        dealer.ResetScore(score);
        std::cout << "Player wins!" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Press any key for a new hand." << std::endl;
        system("pause");
        m_start.ShowIntroduction();
    }
}

void Outcomes::Lose(Player player, Dealer dealer, Score score)
{
    if (player.GetScore(score) < dealer.GetScore(score) &&
		player.GetScore(score) < 22 ||
        player.GetScore(score) > 21)
    {
        m_lose = true;
        player.ResetScore(score);
        dealer.ResetScore(score);
        std::cout << "House wins!" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Press any key for a new hand." << std::endl;
        system("pause");
        player.ResetScore(score);
        dealer.ResetScore(score);
        m_start.ShowIntroduction();
    }
}

void Outcomes::Draw(Player player, Dealer dealer, Score score)
{
    if (dealer.GetScore(score) == player.GetScore(score))
    {
        m_draw = true;
        player.ResetScore(score);
        dealer.ResetScore(score);
        std::cout << "It's a Stand-off!" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Press any key for a new hand." << std::endl;
        system("pause");
        player.ResetScore(score);
        dealer.ResetScore(score);
        m_start.ShowIntroduction();
    }
}

void Outcomes::IsBlackjack(Player player, Dealer dealer, Score score)
{
    if (player.GetScore(score) == 21)
    {
        m_blackjack = true;
        player.ResetScore(score);
        dealer.ResetScore(score);
        std::cout << "Congrats! You have a BLACKJACK! " << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Press any key for a new hand." << std::endl;
        system("pause");
        player.ResetScore(score);
        dealer.ResetScore(score);
        m_start.ShowIntroduction();
    }
    else if (dealer.GetScore(score) == 21)
    {
        m_blackjack = true;
        std::cout << "House got a BLACKJACK! " << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Press any key for a new hand." << std::endl;
        system("pause");
    }
}