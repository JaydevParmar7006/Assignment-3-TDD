#include <string.h>
#include "Source.h"


const char* RockPaperScissors(const char* Player1, const char* Player2)
{
	// RockVsScissors returns Player1
	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0)
	{
		return "Player1";
	}
}