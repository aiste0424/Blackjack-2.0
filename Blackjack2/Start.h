#pragma once
#include "ValidInputCheck.h"
//=================================
//   MADE BY Simas Pauliukenas   //
//=================================
class Start
{
public:

	Start();
	void ShowIntroduction(); //Simas added ASCII art

private:

	int m_start;
	ValidInputCheck m_error;
};

