#include <iostream>
using std::cout;
using std::cin;
using std::endl;

	int Clamp(int q, int w, int e) //int q is lowest range, int w is highest range
	{

		if (e <= q)
			return q;
		else if (e >= w)
			return w;
	}


//---------------------------------------------------------------------------------------------Clamp




//---------------------------------------------------------------------------------------------Min and Max

void Min() {}

void Min(int g, int h)
{
	if (g < h)
		return g;
	else if (g == h)
		return g;
	else
		return h;
}

void Max() {}

void Max(int b, int n)
{
	if (b > n)
		return b;
	else if (b == n)
		return b;
	else
		return n;
}

//----------------------------------------------------------------------------Sum of Three Integers

void Sum() {}

void Sum(int t, int y, int u)
{
	return t + y + u;
}

//------------------------------------------------------------------------------------Pair Printing

void pairPrint() {}

void pairPrint(int o, int p)
{
	cout << "(" << o << ", " << p << ")" << endl;
}


//-----------------------------------------------------------------------Declaration and Definition

int numerator = 0;
int denominator = 0;


void PrintFunctions()
{
	cout << "Functions" << endl;
}

int Square() {}

int Square(int x)
{
	return x * x;
}



void Decimal()
{
	return numerator / denominator;
}


//------------------------------------------------------------------------------


int main
{
}
