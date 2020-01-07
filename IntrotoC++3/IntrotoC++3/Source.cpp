#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//--------------------------------------------------------------------Even or Odd
	int sin = 0;

	cout << "Give me a number and i'll tell you if it's an even or odd number" << endl;
	cin >> sin;





	//--------------------------------------------------------------------The Smallest of Any Number of Numbers
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int lownum = 0;

	cout << "Hey you, yeah you! Give me a list of up to 4 numbers, Quick!" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;

	if (num1 < num2)
		lownum = num1;
	else
		lownum = num2;

	if (lownum < num3)
		lownum + 0;
	else
		lownum = num3;

	if (lownum < num4)
		lownum + 0;
	else
		lownum = num4;

	cout << "Cool, the lowest number in that list is: " << lownum << endl << "Carry on your day." << endl;



	//-------------------------------------------------------------------Age Gate
	int age = 0;

	cout << "Hiya, Whats your age?" << endl;

	cin >> age;

	if (age < 18)
		cout << "Then that makes you a minor!" << endl;
	if (age >= 18)
		cout << "Then that makes you an adult!" << endl;
	if (age >= 50)
		cout << "You're eligable to join the AARP!" << endl;
	if (age >= 65)
		cout << "You're eligable for retirement benefits" << endl;



	//--------------------------------------------------------------------From 100 to 1

	int o = 101;

	while (o > 1)
	{
		o--;
		cout << o << endl;
	}

	//----------------------------------------------------------------------From 1 to 100
	for (int i = 1; i <= 100; i++)
	{
		cout << i << endl;
	}


	//-------------------------------------------------------------Evalutate the Following

	int numberA = 15;
	if (numberA > 10)
		numberA = numberA * 2;

	int numberB = 15;
	if (numberB < 15)
		numberB = numberB * 3;

	int numberC = 15;
	if (numberC <= 15)
		numberC = numberC * 2;
	
	cout << numberA << endl;
	cout << numberB << endl;
	cout << numberC << endl;

	//------------------------------------------------------------Evaluate the Truth Table
	//bool y = true;
	//bool n = false;

	//cout << "oh" << endl;



	/*if (y && y == true) 
		return true;
	else
		return false;

	if (y || n == true)
		return true;
	else
		return false;

	if (n || y == true)
		return true;
	else
		return false;

	if (n && y == true) 
		return true;
	else
		return false;

	if (y && n == true)
		return true;
	else
		return false;

	if (n || y || n == true)
		return true;
	else
		return false;

	if (y && (y || n) == true)
		return true;
	else
		return false;*/
	//-----------------------------------------------------------------------------------------------------

	while (true){}

	return 0;
}
