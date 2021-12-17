#include "ErrorCatching.h"
#include "Player.h"
#include <iostream>
//Aiste's
//checking input when the player starts the game
void ErrorCatching::ValidInput(int input)
{
	while (input != 1)
	{
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Try again\n";
        std::cin >> input;
	}
    system("CLS");
}
//Simas'
//checks the input when the player chooses whether
//they want a new card or not
void ErrorCatching::ValidAnswer(int input)
{
    while (input != static_cast<int>(Player::Choice::No) && input != static_cast<int>(Player::Choice::Yes))
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Try again\n";
        std::cin >> input;
    }
    system("CLS");
}
