#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" {
	const char* RockPaperScissors(const char* Player1, const char* Player2);
}

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:
		
		TEST_METHOD(Test_Player1Wins_RockVsScissors_ReturnsPlayer1)
		{
			const char* Player1 = "Rock";
			const char* Player2 = "Scissors";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Test_Player1Wins_ScissorsVsPaper_ReturnsPlayer1)
		{
			const char* Player1 = "Scissors";
			const char* Player2 = "Paper";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Test_Player1Wins_PaperVsRock_ReturnsPlayer1)
		{
			const char* Player1 = "Paper";
			const char* Player2 = "Rock";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Test_Player2Wins_ScissorsVsRock_ReturnsPlayer2)
		{
			const char* Player1 = "Scissors";
			const char* Player2 = "Rock";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Test_Player2Wins_PaperVsScissors_ReturnsPlayer2)
		{
			const char* Player1 = "Paper";
			const char* Player2 = "Scissors";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Test_Player2Wins_RockVsPaper_ReturnsPlayer2)
		{
			const char* Player1 = "Rock";
			const char* Player2 = "Paper";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Test_Draw_RockVsRock_ReturnsDraw)
		{
			const char* Player1 = "Rock";
			const char* Player2 = "Rock";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Test_Draw_PaperVsPaper_ReturnsDraw)
		{
			const char* Player1 = "Paper";
			const char* Player2 = "Paper";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Test_Draw_ScissorsVsScissors_ReturnsDraw)
		{
			const char* Player1 = "Scissors";
			const char* Player2 = "Scissors";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Test_InvalidInput_AnywordVsRockorPaperorScissors_ReturnsInvalid)
		{
			const char* Player1 = "Jaydev";
			const char* Player2 = "Rock";
			const char* result = RockPaperScissors(Player1, Player2);
			Assert::AreEqual("Invalid", result);
		}
	};
}
