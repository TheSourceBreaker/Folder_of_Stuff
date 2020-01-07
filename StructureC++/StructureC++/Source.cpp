#include <iostream>
#include "person.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	person jon;

	jon.age = 26;
	jon.cash = 52.7;
	jon.killCount = 22;

	cout << "Jon had " << jon.cash << "GBP" << endl;

	float withdraw = getMoney(&jon, 100);

	cout << "Jon has " << jon.cash << "GBP" << endl;


	person * someone = &jon;
	erasePerson(&someone);
	
	if (someone == nullptr)
	{
		cout << "Someone got erased\n";
	}
	else
	{
		cout << "Someone is there\n";
	}

	while(true){}
	return 0;
}
