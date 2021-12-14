#include "Start.h"
#include <iostream>

Start::Start()
{
    m_start = 0;
}

void Start::ShowIntroduction()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "                        ||=================================================================================================||\n";
    std::cout << "                        ||                                                                                                 ||\n";
    std::cout << "                        ||                                         Welcome to BLACKJACK                                    ||\n";
    std::cout << "                        ||                                                                                                 ||\n";
    std::cout << "                        ||              Will you win against me or lose ? Only one way to find out...                      ||\n";
    std::cout << "                        ||                                                                                                 ||\n";
    std::cout << "                        ||=================================================================================================||\n";
    std::cout << "          ||=============================================================================================================================||\n";
    std::cout << "             ||=======================================================================================================================||\n";
    std::cout << "                ||=================================================================================================================||" << std::endl;
    std::cout << "                   \\          /                                                                                       \\          /" << std::endl;
    std::cout << "                    \\________/                                                                                         \\________/" << std::endl; 
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                       INSTRUCTIONS                                        | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |    Beat the dealer by getting a count as close to 21 as possible, without going over 21   | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |       An ace is worth 1 or 11. Face cards are 10 and any other card is its pip value      | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |               First two cards giving a count of 21 are called 'blackjack'                 | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                 Dealer must take a card until the total is 17 or more                     | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     | |||| |                                                                                           | |||| |\n";
    std::cout << "                     |_||||_|                                                                                           |_||||_|\n";
    std::cout << "                    /        \\                                                                                         /        \\ \n";
    std::cout << "                   /__________\\_______________________________________________________________________________________/__________\\ \n";
    std::cout << "                ||=================================================================================================================||\n";
    std::cout << "             ||=======================================================================================================================||\n";
    std::cout << "          ||=============================================================================================================================||\n\n\n";
    
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
