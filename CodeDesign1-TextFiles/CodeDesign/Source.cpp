#include <iostream>
#include <fstream>
#include <string>
#include "SaveGame.h"
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ios;
using std::ios_base;
using std::string;



int main()
{
	std::ofstream file;

	file.open("famousLines.txt", ios::out);

	file << "I'll be back with weapons" << endl;
	file << "Eleventy Billion dollars" << endl;
	file << "The holy light will save us" << endl;
	file << "Four Score and seven years ago" << endl;

	file.flush();
	file.close();
	return 0;
}


/*int main()
{
	SaveGame s;
	std::fstream gamesave;
	bool * isAlive = &s.isAlive;
	float * healthPoints = &s.healthPoints;
	int * potion = &s.potions;
	s.playerName;


	



	cout << "What are your stats?" << endl;

	return 0;
}

int main()
{
	std::fstream file;

	string buffer;
	string answer;
	string text;

	while (true)
	{
		answer = "";

		cout << "Display? Write? Clear? Exit?" << endl;
		cin >> answer;

		cin.clear(); //This means to clear the current line.
		cin.ignore(20,'\n'); //This ignores skipping any '\n' 20 times.

		if (answer == "Display" || answer == "display")
		{
			file.open("MyLog.txt", ios::in); //Opens the text file in read mode.

			if (!file.is_open()) //If file isn't open.
				std::cerr << "File not found." << endl; //cerr = c-error

			while (getline(file, buffer)) //gets the entire line until it gets hit 
				cout << buffer << endl;

			file.clear(); 
			file.close(); //Close the file
		}
		else if (answer == "Write" || answer == "write")
		{
			file.open("MyLog.txt", ios::out); //Opens the text file in write mode.

			file.seekp(0, ios_base::end);

			getline(cin, text);

			file << text << endl;

			file.clear();
			file.close();
		}
		else if (answer == "Clear" || answer == "clear")
		{
			
		}
		else if (answer == "Exit" || answer == "exit")
			break;
	}

	if (file.is_open())
	{
		file.flush();
		file.close();
	}

	return 0;
}*/
