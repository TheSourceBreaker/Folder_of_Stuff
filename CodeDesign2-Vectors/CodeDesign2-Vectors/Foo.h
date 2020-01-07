#pragma once
#include<iostream>

class Foo
{ 
public:

	int value;

	Foo() : value(0)
	{
		std::cout << "Default Constructor" << std::endl; 
	}

	Foo(int v) : value(v)
	{
		std::cout << "Overloaded Constructor with value: " << v << std::endl;
	}

	Foo(const Foo && copy) : value(copy.value)
	{
		std::cout << "Copy Constructor with value: " << value << std::endl;
	}

	Foo(Foo && move) : value(std::move(move.value))
	{
		std::cout << "Move Constructor with value: " << value << std::endl; 
	}

	~Foo() 
	{
		std::cout << "Destructor with value: " << value << std::endl;
	}

};

