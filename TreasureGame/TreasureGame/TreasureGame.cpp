// TreasureGame.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>    // Program will be displaying some text on the screen

using namespace std;    // Will be using standard identifiers cin, cout and endl
int main()
{
	cout << "Welcome to the" << " TREASURE HUNT!\n" << endl;
	cout << "Let's treasure hunt.\n" << endl;
	//Create a boolean array that stores five elements and initialize to false
	bool guessedChest[5]{ false, false, false, false, false };

	//Get player input
	int playerGuess;

	//Wait until the treasure chest is found
	while (guessedChest[4] == false)
	{
		cout << "Which chest is the treasure in?\n" << endl;
		cin >> playerGuess;

		// Reduce user input by 1 to get the correct index
		guessedChest[playerGuess - 1] = true;

		// Check if the user input true or false
		if (guessedChest[4] != true)
		{
			cout << "Wrong guess. Try again\n" << endl;
		}
		else
		{
			cout << "Congatlation! You have just leveled up" << endl;
		}

	}
	return 0;
}