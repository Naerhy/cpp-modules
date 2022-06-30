#include <iostream>
#include <string>
#include <exception>
#include "Array.hpp"

int main(void)
{
	Array<int> ints(5);
	ints[0] = 2;
	ints[1] = 4;
	ints[2] = 6;
	ints[3] = 8;
	ints[4] = 10;

	for (int i = 0; i < 5; i++)
		std::cout << ints[i] << std::endl;

	std::cout << std::endl;

	Array<std::string> strings(3);
	strings[0] = "quentin";
	strings[1] = "aurelien";
	strings[2] = "aude";

	for (int i = 0; i < 3; i++)
		std::cout << strings[i] << std::endl;

	std::cout << std::endl;

	try
	{
		std::cout << strings[4] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
