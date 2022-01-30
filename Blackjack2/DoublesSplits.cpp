#include "DoublesSplits.h"

DoublesSplits::DoublesSplits()
{
	m_doubleDown = false;
	m_split = false;
}

void DoublesSplits::DoubleDown(Player player, Score score)
{
	m_doubleDown = true;

	std::cout << "You chose to double on " << player.GetScore(m_score) << "points." << std::endl;
	std::cout << "You get only one more card. The dealer comes afterwards." << std::endl;

	system("PAUSE");

	m_player.DrawCard(m_deck);
}

void DoublesSplits::Split(Player player, Score score)
{

}
