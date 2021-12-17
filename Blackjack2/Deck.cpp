#include "Deck.h"
#include <time.h>
#include <string>
#include <iostream>
//=================================
//   MADE BY Aiste Simonaityte   //
//=================================
Deck::Deck()
{
	m_randomSuit = 0;
	m_randomRank = 0;

	//changing variable from time_t to unsigned int because of a warning "Possible loss of data"
    srand(unsigned int(time(0)));

	//initializing the correct card suits, ranks and values
    for (int i = 0; i < m_suitNumber; i++)
    {
        for (int j = 0; j < m_rankNumber; j++)
        {
			m_deck[i][j].SetIsTaken(false);
			m_deck[i][j].SetSuit(static_cast<Cards::Suit>(i));
			m_deck[i][j].SetRank(static_cast<Cards::Rank>(j+2));

			//(j+2) instead of j, because Rank enums start from 2 and the loops & matrices start from 0.
			if ((j+2) > static_cast<int>(Cards::Rank::Ten) && (j+2) != static_cast<int>(Cards::Rank::Ace))
			{
				m_deck[i][j].SetValue(static_cast<int>(Cards::Rank::Ten));
			}
			//ace default value is 11
			else if ((j+2) == static_cast<int>(Cards::Rank::Ace))
			{
				m_deck[i][j].SetValue(static_cast<int>(Cards::Rank::Jack));
			}
			//the rest values
			else
			{
				m_deck[i][j].SetValue((j+2));
			}
        }
    }
 }

void Deck::SetRandomSuit()
{
	m_randomSuit = rand() % m_suitNumber;
}

void Deck::SetRandomRank()
{
	m_randomRank = rand() % m_rankNumber + 2;
}

//2 must be deducted from rank, because it's giving a rank which starts from position 2.
//the deck itself starts from (0,0). Without it all the values are increased by 2.
int Deck::GetValue()
{
	return m_deck[m_randomSuit][m_randomRank-2].GetValue();
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
