#pragma once
class ErrorCatching
{
public:

	//when there's one option
	void ValidInput(int input);
	
	//when there's two options (for ace)
	void ValidAceValue(int input);
	
	//when there's not a int 
	void ValidAnswer(int input);
};

