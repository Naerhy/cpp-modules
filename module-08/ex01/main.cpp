#include <algorithm>
#include <cstdlib>
#include "Span.hpp"

#include <iostream>

int main(void)
{
	Span sp = Span(10005);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	/*
	std::vector<int> vect(10000);
	std::vector<int>::iterator begin = vect.begin();
	std::vector<int>::iterator end = vect.end();

	while (begin != end)
	{
		*begin = std::rand() % 10000;
		begin++;
	}

	try
	{
		sp.fillSpan(vect.begin(), end);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	*/

	return 0;
}
