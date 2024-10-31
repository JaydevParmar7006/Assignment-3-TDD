#include <string.h>
#include "Source.h"


const char* RockPaperScissors(const char* Player1, const char* Player2)
{
	// Determining the outcomes
	if ((strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) ||
		(strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0) ||
		(strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0))
	{
		return "Player1";
	}
	else if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Rock") == 0)
	{
		return "Player2";
	}
}