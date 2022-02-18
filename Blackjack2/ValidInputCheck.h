#pragma once
#include "Cash.h"

class ValidInputCheck
{
public:

	void ValidInput(int input);//when there's one option
	void ValidAnswer(int input);//when the answer is not a 0 or 1 //Simas
	int ValidBet(int input, Cash cash);//Aiste

private:

	const int m_bet = 10;
};

