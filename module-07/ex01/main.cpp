#include <iostream>
#include <string>
#include "iter.hpp"

/*******************
** TEST FUNCTIONS **
*******************/

template <typename T>
void printValue(T& t) { std::cout << t << std::endl; }

template <typename T>
void modifyStr(T& str) { str = "banana"; }

template <typename T>
void multiplyNumber(T& nb) { nb *= 2; }

/******************
** MAIN FUNCTION **
******************/

int main(void)
{
	std::string names[3] = {"quentin", "benoit", "anna"};

	iter(names, 3, &printValue);

	iter(names, 3, &modifyStr);

	std::cout << std::endl;

	iter(names, 3, &printValue);

	std::cout << std::endl;

	int numbers[5] = {10, 20, 30, 40, 50};

	iter(numbers, 5, &printValue);

	iter(numbers, 5, &multiplyNumber);

	std::cout << std::endl;

	iter(numbers, 5, &printValue);
	return 0;
}
