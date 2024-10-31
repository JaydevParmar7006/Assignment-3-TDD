#include <string.h>
#include "Source.h"


const char* RockPaperScissors(const char* Player1, const char* Player2)
{
	// Defining Valid Inputs
	const char* ValidInputs[] = { "Rock", "Paper", "Scissors" };

	// Verifying the Inputs
	int Player1Input = 0, Player2Input = 0;
	int i;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(Player1, ValidInputs[i]) == 0) 
		{
			Player1Input = 1;
		}
		if (strcmp(Player2, ValidInputs[i]) == 0) 
		{
			Player2Input = 1;
		}
	}

	if (!Player1Input || !Player2Input) 
	{
		return "Invalid";
	}

	// Determining the outcomes
	if (strcmp(Player1, Player2) == 0) 
	{
		return "Draw";
	}
	
	if ((strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) ||
		(strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0) ||
		(strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0)) 
	{
		return "Player1";
	}
	
	return "Player2";

}