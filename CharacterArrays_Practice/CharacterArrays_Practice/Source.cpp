#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
using std::cout;
using std::endl;
using std::cin;



int main()
{
	char firstName[] = "Jahvier";
	char lastName[] = "Hernandez";

	char blank[20] = "";

	char name[] = "Jahvier Heranandez";

	name[5] = '\0';

	cout << "TEXT:" << name << endl;
	cout << "LEN:" << strlen(name) << endl;
	
	strcat(blank, firstName);

	cout << "BLANK:" << blank << endl;

	char text1[] = "a";
	char text2[] = "b";

	cout << "COMPARE:" << strcmp(text1, text2) << endl;

	while (true){}

	 return 0;
}