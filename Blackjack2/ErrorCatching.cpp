#include "ErrorCatching.h"
#include <iostream>

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
