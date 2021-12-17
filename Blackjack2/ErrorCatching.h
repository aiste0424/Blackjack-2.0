#pragma once
class ErrorCatching
{
public:

	//when there's one option
	void ValidInput(int input);
	
	//when there's two options (for ace)
	void ValidAceValue(int input);
	
	//when the answer is not a 0 or 1 //Simas
	void ValidAnswer(int input);
};

