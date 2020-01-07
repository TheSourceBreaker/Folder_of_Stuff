#include <iostream>
#include <string>
#include "Struct.h"
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main()
{

	Struct str;

	bool * p1Win = &str.fplayerWin;
	bool * p2Win = &str.splayerWin;
	bool * p1Turn = &str.fplayerTurn;
	bool * p2Turn = &str.splayerTurn;

	char input;
	char letter[10] = {"QWEASDZXC"};
	char number[10] = {"123456789"};

	int board[3][3] = {};

	for (int i = 0; i < 9; i++)
		board[i][i] = 0;

	//cout << "Welcome to Tic-Tac-Toe \n The keys for this game are 'Q', 'W', 'E', 'A', 'S', 'D', 'Z', 'X', 'C' \n OR use keys 1-9 on the" << endl;

	while (p1Win == false || p2Win == false)
	{
		if (!input)
		{
			Check(input, number[10],letter[],10);
			for (int i = 0; i < 9; i++)
				cout << board[i][i];
		}
		

	}


	





}