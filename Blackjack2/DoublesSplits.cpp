#include "DoublesSplits.h"

DoublesSplits::DoublesSplits()
{
	m_doubleDown = false;
	m_split = false;
	m_choice = 0;
}

void DoublesSplits::DoubleDown(Player player, Score score)
{
	std::cout << "Would you like to double? [1/0]" << std::endl;
	std::cin >> m_choice;

	if (m_choice == static_cast<int>(Player::Choice::Yes))
	{
		m_doubleDown = true;

		std::cout << "You chose to double on " << player.GetScore(m_score) << "points." << std::endl;
		std::cout << "You get only one more card. The dealer comes afterwards." << std::endl;

		//TODO: Insert bet here 

	}
	else if (m_choice == static_cast<int>(Player::Choice::No))
	{
		std::cout << "Player doesn't double." << std::endl;
	}
	else
	{
		m_error.ValidInput(m_choice);
	}
}

void DoublesSplits::Split(Player player, Score score)
{
	std::cout << "Would you like to split? [1/0]" << std::endl;
	std::cin >> m_choice;

	if (static_cast<int>(Player::Choice::Yes))
	{
		m_split = true;

		std::cout << "You chose to split. You get one card on each of your first 2 cards now." << std::endl;

	}
	else if (m_choice == static_cast<int>(Player::Choice::No))
	{
		std::cout << "Player doesn't double." << std::endl;
	}
	else
	{
		m_error.ValidInput(m_choice);
	}
}
