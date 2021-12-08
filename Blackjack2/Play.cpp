#include "Play.h"
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include "ErrorCatching.h"

//initializing all the variables in the class,
//giving the right types and values to each card
Play::Play()
{
    srand(time(0));

    m_newCard = 0;
    m_randomType = 0;
    m_randomValue = 0;
	m_value = static_cast<Cards::Value>(0);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            deck[i][j].SetType(static_cast<Cards::Type>(i));
            deck[i][j].SetValue(static_cast<Cards::Value>(j + 2));
        }
    }                                     
}

void Play::DrawCard()
{
	//gives random number
    m_randomType = rand() % m_typeNumber + 1;
    m_randomValue = rand() % m_valueNumber + 2;

	//asking for input
    std::cout << "Press 1 for a random card\n";
    std::cin >> m_newCard;
	m_error.ValidInput(m_newCard);
    std::cout << std::endl;

	//checking if the card has been taken
    while (deck[m_randomType][m_randomValue].GetIsTaken() == true)
    {
		//while yes, give a new number
        m_randomType = rand() % m_typeNumber + 1;
        m_randomValue = rand() % m_valueNumber + 2;
    }
	//sets the card to TAKEN after being used to avoid getting the same cards
    deck[m_randomType][m_randomValue].SetIsTaken(true);
}

void Play::PrintPicture()
{
	
	std::cout << "____________" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "| " << symbol;
	//one space difference to make the card ASCII art look neat
	if (symbol == "10")
	{
		std::cout << "       |" << std::endl;
	}
	else
	{
		std::cout << "        |" << std::endl;
	}
	std::cout << "|          |" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "|        " << symbol;

	//one space difference to make the card ASCII art look neat
	if (symbol == "10")
	{
		std::cout << "|" << std::endl;
	}
	else
	{
		std::cout << " |" << std::endl;
	}
	std::cout << "|__________|" << std::endl;
}

void Play::CheckCardValue()
{
	m_value = static_cast<Cards::Value>(m_randomValue);

	switch (m_value)
	{
	case Cards::Value::Jack:
	{
		symbol = "J";
		break;
	}
	case Cards::Value::Queen:
	{
		symbol = "Q";
		break;
	}
	case Cards::Value::King:
	{
		symbol = "K";
		break;
	}
	case Cards::Value::Ace:
	{
		symbol = "A";
		break;
	}
	default:
		symbol = std::to_string(m_randomValue);
		break;
	}
}
