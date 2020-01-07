#include"Shortcut.h"

void main()
{




	//---------------------------------
	string passw[3] = {"hello","box","um"};
	cout << passw[0] << endl;
	cout << passw[1] << endl;
	cout << passw[2] << endl;



	//---------------------------------
	string my_string1, my_string2, my_string3, my_string4, _connector, _and;

	my_string1 = "Name1";
	my_string2 = "Name2";
	my_string3 = "Name3";
	my_string4 = "Name4";
	_and = " and ";
	_connector = my_string1 + _and + my_string2 + _and + my_string3 + _and + my_string4;

	cout << _connector << endl;
	//---------------------------------

	string my_string;

	cin >> my_string;
	cout << my_string << endl;

	while (true) {};
}