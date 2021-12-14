#include "Start.h"
#include <iostream>

Start::Start()
{
    m_start = 0;
}

void Start::ShowIntroduction()
{
    std::cout << "|==========================================|\n";
    std::cout << "|Welcome to blackjack. Will you win against| \n|me or lose? Only one way to find out...   |";
    std::cout << "\n|==========================================|\n\n\n\n";
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
