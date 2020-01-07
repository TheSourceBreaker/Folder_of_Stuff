#include <iostream>
#include <vector>
#include "Foo.h"

int main()
{

	{
		Foo foo1(10);
		Foo foo2(20);
		Foo foo3(30);
		{
			std::vector<Foo> myFooContainer;

			std::cout << std::endl;
			myFooContainer.push_back(foo1);
			std::cout << std::endl;
			myFooContainer.push_back(foo2);
			std::cout << std::endl;
			myFooContainer.push_back(foo3);
			std::cout << std::endl;
		}
	}

	//-------------------------------------------------------------------------
	//// create a std::vector to store integer values
	//std::vector<int> myIntContainer;

	//// pre-allocate memory to avoid memory being moved about
	//myIntContainer.reserve(10);

	//// we can add items to the container 
	//myIntContainer.push_back(10);
	//myIntContainer.push_back(20);
	//myIntContainer.push_back(30);

	//// we can remove items from the end of the container
	////myIntContainer.pop_back();

	//// we can access items within the container at random
	//myIntContainer[1]= 200;
	////we can loop through items using random access
	//for(int i= 0; i < myIntContainer.size(); i++)
	//{
	//	std::cout << myIntContainer[i] << std::endl;
	//}
	////-------------------------------------------------------------------
	while (true);
	return 0;
}
