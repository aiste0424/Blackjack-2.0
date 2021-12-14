#include "Deck.h"
#include <time.h>
#include <string>
#include <iostream>

Deck::Deck()
{
    srand(time(0));
	m_randomSuit = 0;
	m_randomRank = 0;

	//initializing the correct card suits, ranks and values
    for (int i = 0; i < m_suitNumber; i++)
    {
        for (int j = 0; j < m_rankNumber; j++)
        {
            m_deck[i][j].SetSuit(static_cast<Cards::Suit>(i));
			m_deck[i][j].SetRank(static_cast<Cards::Rank>(j+2));

			//if card above rank 10
			if ((j+2) > static_cast<int>(Cards::Rank::Ten) && (j+2) != static_cast<int>(Cards::Rank::Ace))
			{
				m_deck[i][j].SetValue(static_cast<int>(Cards::Rank::Ten));
			}
			//ace default value is 11
			else if (j == static_cast<int>(Cards::Rank::Queen))
			{
				m_deck[i][j].SetValue(static_cast<int>(Cards::Rank::Jack));
			}
			//the rest values
			else
			{
				m_deck[i][j].SetValue((j+2));
			}
			m_deck[i][j].SetIsTaken(false);
        }
    }
	std::cout << "Initializing Deck: successful\n";
}

//random position in the deck
void Deck::SetRandomSuit()
{
	m_randomSuit = rand() % m_suitNumber;
}

void Deck::SetRandomRank()
{
	m_randomRank = rand() % m_rankNumber + 2;
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
//restarting the game
void Deck::ResetCards()
{
	for (int i = 0; i < m_suitNumber; i++)
	{
		for (int j = 0; j < m_rankNumber; j++)
		{
			m_deck[i][j].SetIsTaken(false);
		}
	}
}

void Deck::PrintCurrentCardSuit()
{
	switch (static_cast<Cards::Suit>(m_randomSuit))
	{
	case Cards::Suit::Clubs:
		std::cout << " of Clubs";
		break;

	case Cards::Suit::Diamonds:
		std::cout << " of Diamonds";
		break;

	case Cards::Suit::Hearts:
		std::cout << " of Hearts";
		break;

	case Cards::Suit::Spades:
		std::cout << " of Spades";
		break;
	}
}

//prints the current value 
void Deck::PrintCurrentCardRank()
{
	switch (static_cast<Cards::Rank>(m_randomRank))
	{
	case Cards::Rank::Jack:
		m_symbol = "J";
		std::cout << "Jack";
		break;

	case Cards::Rank::Queen:
		m_symbol = "Q";
		std::cout << "Queen";
		break;

	case Cards::Rank::King:
		m_symbol = "K";
		std::cout << "King";
		break;
	
	case Cards::Rank::Ace:
		m_symbol = "A";
		std::cout << "Ace";
		break;

	default:
		m_symbol = std::to_string(m_randomRank);
		std::cout << static_cast<int>(m_randomRank);
		break;
	}
}

void Deck::CardTaken()
{
	//while the card is taken, give another card
	while (m_deck[m_randomSuit][m_randomRank].GetIsTaken() == true)
	{
		m_randomSuit = rand() % m_suitNumber;
		m_randomRank = rand() % m_rankNumber + 2;
	}
	//if the card is picked, set to 'taken'
	m_deck[m_randomSuit][m_randomRank].SetIsTaken(true);
}
