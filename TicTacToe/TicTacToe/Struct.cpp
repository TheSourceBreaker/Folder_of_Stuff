#include <iostream>
#include <string>
#include "Struct.h"
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;



void Check(char input, char number[], char letter[], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		if (input == number[i] || input == letter[i]) // This checks what type of char the player inputted
		{
			//board[i] = 1;
			//This'll update the board with the input
		}

	}
}