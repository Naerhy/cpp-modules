#include <iostream>
#include <string>
#include <exception>
#include "Array.hpp"

int main(void)
{
	Array<int> myArray(5);
	myArray[0] = 2;
	myArray[1] = 4;
	myArray[2] = 6;
	myArray[3] = 8;
	myArray[4] = 10;
	for (int i = 0; i < 5; i++)
		std::cout << myArray[i] << std::endl;

	Array<std::string> strArray(3);
	strArray[0] = "this is";
	strArray[1] = "the end";
	strArray[2] = "of the world";
	for (int i = 0; i < 3; i++)
		std::cout << strArray[i] << std::endl;

	try
	{
		std::cout << strArray[4] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
