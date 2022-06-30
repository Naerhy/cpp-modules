#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "classes.hpp"

Base* generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	if (random == 1)
	{
		std::cout << "An instance of A has been created" << std::endl;
		return new A();
	}
	else if (random == 2)
	{
		std::cout << "An instance of B has been created" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "An instance of C has been created" << std::endl;
		return new C();
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer is of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer is of type B" << std::endl;
	else
		std::cout << "Pointer is of type C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Reference is of type A" << std::endl;
	}
	catch (std::exception& e) {}

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Reference is of type B" << std::endl;
	}
	catch (std::exception& e) {}

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Reference is of type C" << std::endl;
	}
	catch (std::exception& e) {}
}

int main(void)
{
	Base* first = generate();
	identify(first);
	identify(*first);
	delete first;

	return 0;
}
