#pragma once
#include <string>
#include "Cards.h"

class Deck
{
public:

	Deck();
	void SetRandomType();
	void SetRandomValue();
	void PrintPicture();
	void PrintCurrentCardType();
	void PrintCurrentCardValue();
	void AceValue();//choose ace value?

	Cards::Value GetCurrentCardValue();
	Cards::Type GetCurrentCardType();

	void CardTaken();

private:

	std::string m_symbol;

	int m_randomType;
	int m_randomValue;

	const int m_typeNumber = 4;
	const int m_valueNumber = 13;

	Cards   m_aceClubs, m_twoClubs, m_threeClubs, m_fourClubs, m_fiveClubs, m_sixClubs,
			m_sevenClubs, m_eightClubs, m_nineClubs, m_tenClubs, m_jackClubs,
			m_queenClubs, m_kingClubs;

	Cards   m_aceHearts, m_twoHearts, m_threeHearts, m_fourHearts, m_fiveHearts, m_sixHearts,
			m_sevenHearts, m_eightHearts, m_nineHearts, m_tenHearts, m_jackHearts,
			m_queenHearts, m_kingHearts;

	Cards   m_aceSpades, m_twoSpades, m_threeSpades, m_fourSpades, m_fiveSpades, m_sixSpades,
			m_sevenSpades, m_eightSpades, m_nineSpades, m_tenSpades, m_jackSpades,
			m_queenSpades, m_kingSpades;

	Cards   m_aceDiamonds, m_twoDiamonds, m_threeDiamonds, m_fourDiamonds, m_fiveDiamonds, m_sixDiamonds,
			m_sevenDiamonds, m_eightDiamonds, m_nineDiamonds, m_tenDiamonds, m_jackDiamonds,
			m_queenDiamonds, m_kingDiamonds;

	Cards m_deck[4][13] = { {m_aceClubs, m_twoClubs, m_threeClubs, m_fourClubs, m_fiveClubs, m_sixClubs,
							 m_sevenClubs, m_eightClubs, m_nineClubs, m_tenClubs, m_jackClubs,
							 m_queenClubs, m_kingClubs},

							{m_aceHearts, m_twoHearts, m_threeHearts, m_fourHearts, m_fiveHearts, m_sixHearts,
							 m_sevenHearts, m_eightHearts, m_nineHearts, m_tenHearts, m_jackHearts,
							 m_queenHearts, m_kingHearts},

							{m_aceSpades, m_twoSpades, m_threeSpades, m_fourSpades, m_fiveSpades, m_sixSpades,
							 m_sevenSpades, m_eightSpades, m_nineSpades, m_tenSpades, m_jackSpades,
							 m_queenSpades, m_kingSpades},

							{m_aceDiamonds, m_twoDiamonds, m_threeDiamonds, m_fourDiamonds, m_fiveDiamonds, m_sixDiamonds,
							 m_sevenDiamonds, m_eightDiamonds, m_nineDiamonds, m_tenDiamonds, m_jackDiamonds,
							 m_queenDiamonds, m_kingDiamonds}};
};

