#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int sum(int * numbers, size_t length)
{
	int total = 0;

	for(size_t i = 0;)
	
}

int * zeroArray(size_t length)
{
	int * arr = new int[length];
	for (size_t i = 0; i < length; ++i)
	{
		arr[i] = 0;
	}
	return arr;
}

int main()
{
	int walletCount = 10;
	int * wallets = new int[walletCount];

	wallets[0] = 7;
	wallets[1] = 23;
	wallets[2] = 10;
	wallets[3] = 43;
	wallets[4] = 78;
	wallets[5] = 17;
	wallets[6] = 76;
	wallets[7] = 64;
	wallets[8] = 8;
	wallets[9] = 32;

	int * noWallets = zeroArray(1000);

	int total = sum(noWallets, 1000);

	delete[] wallets;
	delete[] noWallets;

	int * something = NULL;

	if (something != NULL)
	{
		cout << *something << endl;
	}
	else
	{
		cout << "Something was NULL" << endl;
	}

	return 0;
}