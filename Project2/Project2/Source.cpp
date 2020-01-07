#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{

	int boardSize = 3;

	int** board = new int*[boardSize];
	
	for (int o = 0; o < boardSize; ++o)
	{
		board[o] = new int[boardSize];
		for (int i = 0; i < boardSize; ++i)
		{
			board[o][i] = i + 1;
		}
	}
	
	for (int p = 0; p < boardSize; ++p)
	{
		for (int y = 0; y < boardSize; ++y)
		{
			cout << " [" << board[p][y] << "]";
		}
		cout << endl;
	}

	while(true){}

	return 0;
}