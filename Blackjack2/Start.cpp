#include "Start.h"
#include <iostream>

Start::Start()
{
    m_start = 0;
}

void Start::ShowIntroduction()
{
    std::cout << "|==========================================|\n";
    std::cout << "|Welcome to blackjack. Will you win against|\n";
    std::cout << "| me or lose ? Only one way to find out... |\n";
    std::cout << "|==========================================|\n\n\n\n";
    
    std::cout << "INSTRUCTIONS\n\n";
    std::cout << "In this game you will play one of the most popular card games.\n";
    std::cout << "Standard 52 - card pack is used.\n";
    std::cout << "OBJECT OF THE GAME\n";
    std::cout << "Beat the dealer by getting a count as close to 21 as possible, without going over 21.\n";
    std::cout << "CARD VALUES/SCORING\n";
    std::cout << "An ace is worth 1 or 11. Face cards are 10 and any other card is its pip value.";
    std::cout << "This game has no betting system.\n\n";
    std::cout << "If first two cards are an ace and a 'ten-card' (a picture card or 10),\n";
    std::cout << "giving a count of 21 in two cards, this is a natural or 'blackjack'.\n\n";
    std::cout << "THE DEALER'S PLAY\n";
    std::cout << "If the total sum of dealer's count is 17 or more, it must stand.\n";
    std::cout << "If the total is 16 or under, dealer must take a card until the total is 17 or more.\n";
    
    std::cout << "Press 1 to start the game.\n\n\n";
    std::cin >> m_start;

    if (m_start == 1)
    {
        system("CLS");
    }
    else
    {
        m_error.ValidInput(m_start);
    }
}
