#pragma once
#include "ErrorCatching.h"

class Start
{
public:

	Start();
	void ShowIntroduction(); //Simas added ASCII art

private:

	int m_start;
	ErrorCatching m_error;
};

