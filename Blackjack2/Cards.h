#pragma once

class Cards
{
public:

	enum class Suit
	{
		//the allignment is the same as in the deck[][] matrix. DO NOT TOUCH
		Clubs,
		Hearts,
		Spades,
		Diamonds
	};

	enum class Rank
	{
		Two = 2,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack,
		Queen,
		King,
		Ace
	};
	//suit - one of the four
	//rank - what the card is
	//value - how much it is worth

	Cards();
	void SetSuit(Suit suit);
	void SetRank(Rank rank);

	void SetValue(int value);
	void SetIsTaken(bool taken);

	Suit GetSuit();
	Rank GetRank();
	int GetValue();

	bool GetIsTaken();

private:

	Suit m_suit;
	Rank m_rank;
	int m_value;
	bool m_isTaken;
};

