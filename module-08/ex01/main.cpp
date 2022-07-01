#include <algorithm>
#include <cstdlib>
#include "Span.hpp"

#include <iostream>

int main(void)
{
	std::cout << "creating span of size 15 | adding random numbers | should pass" << std::endl;
	try
	{
		Span sp(15);
		srand(time(NULL));
		for (unsigned int i = 0; i < sp.getMaxSize(); i++)
			sp.addNumber(rand() % 100);
		sp.printStoredNumbers();
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "creating span of 15 | adding too many random numbers | should fail" << std::endl;
	try
	{
		Span sp(15);
		srand(time(NULL));
		for (unsigned int i = 0; i < sp.getMaxSize() + 1; i++)
			sp.addNumber(rand() % 100);
		sp.printStoredNumbers();
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "creating span of 1 | adding random number | should fail" << std::endl;
	try
	{
		Span sp(1);
		srand(time(NULL));
		for (unsigned int i = 0; i < sp.getMaxSize(); i++)
			sp.addNumber(rand() % 100);
		sp.printStoredNumbers();
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "creating span of 10000 | adding numbers with iterators | should pass" << std::endl;
	try
	{
		Span sp(10000);
		std::vector<int> vect(10000);
		std::vector<int>::iterator begin = vect.begin();
		std::vector<int>::iterator end = vect.end();
		srand(time(NULL));
		while (begin != end)
		{
			*begin = rand() % 100000;
			begin++;
		}
		sp.fillSpan(vect.begin(), vect.end());
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
