#include "Doubles.h"

Doubles::Doubles()
{
	m_doubleDown = false;
	m_split = false;
	m_choice = 0;
}

void Doubles::DoubleDown(Player* player, Score score, Cash cash)
{
	std::cout << "Would you like to double your bet? [1/0]" << std::endl;
	std::cout << "You will only get one card. The dealer pulls afterwards." << std::endl;
	std::cin >> m_choice;

	if (m_choice == static_cast<int>(Player::Choice::Yes))
	{
		m_doubleDown = true;

		std::cout << "You chose to double on #" << player->GetScore(m_score) << " points.\n" << std::endl;

		player->GetBet(cash);  //this is the bet the player places
		cash.DoubleBet();
		std::cout << "Your current bet is " << cash.GetBet() << std::endl;

		system("pause");
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

bool Doubles::IsDouble()
{
	return m_doubleDown;	
}
