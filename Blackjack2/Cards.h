#pragma once

class Cards
{
public:

	enum class Type
	{
		//the allignment is the same as in the deck[][] matrix. DO NOT TOUCH
		Clubs,
		Hearts,
		Spades,
		Diamonds
	};

	enum class Value
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

	Cards();
	void SetType(Type type);
	void SetValue(Value value);
	bool GetIsTaken();
	void SetIsTaken(bool taken);

	Type GetType();
	Value GetValue();

private:

	bool m_isTaken;
	Type m_type;
	Value m_value;
};

