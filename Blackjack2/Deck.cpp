#include "Deck.h"
#include <time.h>
#include <string>
#include <iostream>
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================

Deck::Deck()
{
	//changing variable from time_t to unsigned int because of a warning "Possible loss of data"
	srand(unsigned int(time(0)));

	m_randomSuit = 0;
	m_randomRank = 0;

	m_rankCounter = 1;
	m_rank = 0;
	m_value = 0;

	//initializing the correct card suits, ranks and values
	for (int i = 0; i < m_maxSuit; i++)
	{
		//ranks and values are reset to 2 every time a new row begins
		m_rank = 2;
		m_value = 2;
		for (int j = 0; j < m_maxRank; j++)
		{
			m_deck[i][j].SetIsTaken(false);
			m_deck[i][j].SetSuit(static_cast<Cards::Suit>(i));
			m_deck[i][j].SetRank(static_cast<Cards::Rank>((m_rank)));

			//jack, queen and king have a value of 10.
			if ((m_value) > static_cast<int>(Cards::Rank::Ten) && (m_value) != static_cast<int>(Cards::Rank::Ace))
			{
				m_deck[i][j].SetValue(static_cast<int>(Cards::Rank::Ten));
			}
			//ace default value is 11
			else if ((m_value) == static_cast<int>(Cards::Rank::Ace))
			{
				m_deck[i][j].SetValue(static_cast<int>(Cards::Rank::Jack));
			}
			//the rest of the values
			else
			{
				m_deck[i][j].SetValue((m_value));
			}

			//each card is repeated 6 times, because there are 6 decks being used
			if (m_rankCounter == m_decksUsed)
			{
				//ranks and values are increased by one every 6 times
				m_rankCounter = 1;
				m_rank++;
				m_value++;
			}
			else
			{
				m_rankCounter++;
			}
		}
	}
}

void Deck::SetRandomSuit()
{
	m_randomSuit = rand() % m_maxSuit;
}

void Deck::SetRandomRank()
{
	m_randomRank = rand() % m_maxRank;
}

int Deck::GetValue()
{
	return m_deck[m_randomSuit][m_randomRank].GetValue();
}

void Deck::PrintPicture()
{
	std::cout << "\n___________" << std::endl;
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

//for replayability purposes
void Deck::ResetCards()
{
	for (int i = 0; i < m_maxSuit; i++)
	{
		for (int j = 0; j < m_maxRank; j++)
		{
			m_deck[i][j].SetIsTaken(false);
		}
	}
}

void Deck::PrintCurrentCardSuit()
{
	switch (static_cast<Cards::Suit>(m_deck[m_randomSuit][m_randomRank].GetSuit()))
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

void Deck::PrintCurrentCardRank()
{
	switch (static_cast<Cards::Rank>(m_deck[m_randomSuit][m_randomRank].GetRank()))
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
		m_symbol = std::to_string(static_cast<int>(m_deck[m_randomSuit][m_randomRank].GetRank()));
		std::cout << static_cast<int>(m_deck[m_randomSuit][m_randomRank].GetRank());
		break;
	}
}

void Deck::CardTaken()
{
	//while the card is taken, give another card
	while (m_deck[m_randomSuit][m_randomRank].GetIsTaken() == true)
	{
		m_randomSuit = rand() % m_maxSuit;
		m_randomRank = rand() % m_maxRank;
	}
	//if the card is picked, set to 'taken'
	m_deck[m_randomSuit][m_randomRank].SetIsTaken(true);
}
