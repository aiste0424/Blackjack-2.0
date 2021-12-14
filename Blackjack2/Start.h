#pragma once
#include "ErrorCatching.h"

class Start
{
public:

	Start();
	void ShowIntroduction();

private:

	int m_start;
	ErrorCatching m_error;
};

