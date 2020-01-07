#include <iostream>
#include "utili.h"

using std::cout;
using std::cin;
using std::endl;

//Declare and define sum
int sum(int a, int b) 
{
	return a + b;
}

//Declare sub
int sub(int a, int b);

int main()
{

	//call sum
	cout << sum(5, 7) << endl;

	//call mul
	cout << mul(5, 5) << endl;

	//call div
	cout << div(6, 2) << endl;

	while (true) 
	{}

	return 0;
}

//Declare and define sub
int sub(int a, int b) 
{
	return a - b;
}