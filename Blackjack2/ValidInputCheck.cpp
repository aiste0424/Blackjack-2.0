#include "ValidInputCheck.h"
#include "Player.h"
#include <iostream>
//Aiste's
//checking input when the player starts the game
void ValidInputCheck::ValidInput(int input)
{
	while (input != static_cast<int>(Player::Choice::Yes))
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
void ValidInputCheck::ValidAnswer(int input)
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
//bet has to be multiples of 10, minimum 10
int ValidInputCheck::ValidBet(int input, Cash cash)
{
    while (input % m_bet != 0 || input < m_bet || input > cash.GetCash())
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Ivalid bet, please try again\n";
        std::cin >> input;
    }
    return input;
    system("CLS");
}
