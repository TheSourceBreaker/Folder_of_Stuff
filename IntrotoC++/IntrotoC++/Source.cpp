#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	//-------------------------------------------------------------------------------Handling Errors

	int number = 0;
	
	while (true) {


		cout << "I need a number real quick and don't ask me why!" << endl << endl;

		cin >> number;

		if (number += 1) {
			cout << number << "? Thanks, now I can use YOUR luck to win the lottery! Well that and also I just" << endl;
			cout << "couldn't think of a number to go with..." << endl;
			break;
		}
		else if (number == 0) {
			cout << "A 0 won't do, I need a different number." << endl;
			continue;
		}
		else {
			cout << "Uh...could'a sworn that " << number << "wasn't a number, come on I just need a number" << endl;
			continue;
		}
	}
	//-------------------------------------------------------------------------------Practice
	cout << 5 << 0 << 5 << "+" << 10 << "=" << 5 << 1 << 5 << endl << endl;

	int age = -1;

	cout << "What is your age?" << endl << endl;

	cin >> age;

	cout << endl << "Wow, so you're " << age << " years old?" << endl << endl;

	//-----------------------------------------------------------------------My Final Form: A

	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	cout << "A)" << numberA << endl;

	//-----------------------------------------------------------------------My Final Form: B

	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	cout << "B)" << numberB << endl;

	//-----------------------------------------------------------------------My Final Form: C

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	cout << "C)" << numberC << endl;

	//-----------------------------------------------------------------------My Final Form: D

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	cout << "D)" << numberD << endl;

	//-----------------------------------------------------------------------My Final Form: E

	int x = 13;

	x = x / 2;

	cout << "E)" << x << endl;

	//-----------------------------------------------------------------------My Final Form: F

	float y = 13;

	y = y / 2;

	cout << "F)" << y << endl << endl;

	//-------------------------------------------------------------------Celsius to Fahrenheit

	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;

	cout << "Choose the degree of Celsius in which you want to convert into Fahrenheit" << endl << endl;

	cin >> degCelsius;

	degFahrenheit = (degCelsius * 9 / 5) + 32;

	cout << endl << "Celsius to Fahrenheit)" << endl << endl;
	cout << "Celsius:	" << degCelsius << endl;
	cout << "Fahrenheit:	 " << degFahrenheit << endl << endl;

	//----------------------------------------------------------------------Area of a Rectangle

	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	cout << "Time to find the Area of this rectangle, though this requires a Width and a Height." << endl;
	cout << "Please enter the Width" << endl << endl;
	cin >> rectWidth;
	cout << endl << "Ok! " << rectWidth << " it is." << endl;
	cout << "Next choose a Height" << endl << endl;
	cin >> rectHeight;

	rectArea = rectWidth * rectHeight;

	cout << endl << "Ok!, the result are in!" << endl;

	cout << "Area of a Rectangle)" << endl;
	cout << "H: " << rectHeight << ", W: " << rectWidth << endl;
	cout << "Area: " << rectArea << endl;

	//--------------------------------------------------------------------------Average of Five

	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	cout << endl << "Please input the five numbers you wish to see the average of." << endl;
	cin >> a >> b >> c >> d >> e;

	avg = (a + b + c + d + e) / 5;

	cout << endl << "Average of Five)" << endl;
	cout << a << "," << b << "," << c << "," << d << "," << e << endl;
	cout << "average:" << avg << endl << endl;

	//------------------------------------------------------------------WRONG------------Number Swap

	int p = 0;
	int o = 0;
	int u = 0;


	cout << "Insert input for x and y" << endl;
	cin >> p >> o;

	u += p;
	p = o;
	o = u;

	cout << endl << "Number Swap)" << endl;

	cout << "x is " << p << endl;
	cout << "y is " << o << endl << endl;

	//------------------------------------------------------------------------Fun Facts for Your Age

	int userAge = 0;
	int months = 0;

	cout << "Hello I can tell you a rough estimate of how long you've been alive for!" << endl;
	cout << "Just tell me how old you are." << endl << endl;

	cin >> userAge;

	months = userAge * 12;


	cout << "So you're " << userAge << " years old!" << endl;
	cout << "That would mean that you've been alive for at least " << months << " months!" << endl << endl;

	//------------------------------------------------------------------------------------------------
	cout << "This is the next line" << endl;

	while (true){}

	return 0;
}

