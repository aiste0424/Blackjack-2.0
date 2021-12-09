#include "Deck.h"
#include <time.h>
#include <iostream>
#include <string>

Deck::Deck()
{
    srand(time(0));

	m_randomType = 0;
	m_randomValue = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            m_deck[i][j]->SetType(static_cast<Cards::Type>(i));
            m_deck[i][j]->SetValue(static_cast<Cards::Value>(j + 2));
			m_deck[i][j]->SetIsTaken(false);
        }
    }
}

void Deck::SetRandomType()
{
	m_randomType = rand() % m_typeNumber;
}

void Deck::SetRandomValue()
{
	m_randomValue = rand() % m_valueNumber + 2;
}

void Deck::PrintPicture()
{
	std::cout << "\n____________" << std::endl;
	std::cout << "|          |" << std::endl;
	std::cout << "| " << m_symbol;
	//one space difference to make the card ASCII art look neat
	if (m_symbol == "10")
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
	std::cout << "|        " << m_symbol;

	//one space difference to make the card ASCII art look neat
	if (m_symbol == "10")
	{
		std::cout << "|" << std::endl;
	}
	else
	{
		std::cout << " |" << std::endl;
	}
	std::cout << "|__________|" << std::endl;
}

void Deck::PrintCurrentCardType()
{
	switch (static_cast<Cards::Type>(m_randomType))
	{
	case Cards::Type::Clubs:
		std::cout << " of Clubs";
		break;

	case Cards::Type::Diamonds:
		std::cout << " of Diamonds";
		break;

	case Cards::Type::Hearts:
		std::cout << " of Hearts";
		break;

	case Cards::Type::Spades:
		std::cout << " of Spades";
		break;
	}
}

void Deck::PrintCurrentCardValue()
{
	switch (static_cast<Cards::Value>(m_randomValue))
	{
	case Cards::Value::Jack:
		m_symbol = "J";
		std::cout << "Jack";
		break;

	case Cards::Value::Queen:
		m_symbol = "Q";
		std::cout << "Queen";
		break;

	case Cards::Value::King:
		m_symbol = "K";
		std::cout << "King";
		break;

	case Cards::Value::Ace:
		m_symbol = "A";
		std::cout << "Ace";
		break;

	default:
		m_symbol = std::to_string(m_randomValue);
		std::cout << static_cast<int>(m_randomValue);
		break;
	}
}

Cards::Value Deck::GetCurrentCardValue()
{
	return static_cast<Cards::Value>(m_randomValue);
}

Cards::Type Deck::GetCurrentCardType()
{
	return static_cast<Cards::Type>(m_randomValue);
}

void Deck::CardTaken()
{
	int i = 0;
	std::cout << "\n\n";
	//std::cout << static_cast<int>(m_deck[m_randomType][m_randomValue]->GetType());
	std::cout << "\n\n";
	while (m_deck[m_randomType][m_randomValue]->GetIsTaken())
	{
		i++;
		std::cout << "The function has been done " << i << " times\n";
		m_randomType = rand() % m_typeNumber;
		m_randomValue = rand() % m_valueNumber + 2;
	}
	m_deck[m_randomType][m_randomValue]->SetIsTaken(true);
}
