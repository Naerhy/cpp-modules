#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "[WrongCat] Constructor" << std::endl;
	_type = "Wrong Cat";
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
	std::cout << "[WrongCat] Copy constructor" << std::endl;
}

WrongCat::~WrongCat(void) { std::cout << "[WrongCat] Destructor" << std::endl; }

WrongCat& WrongCat::operator=(WrongCat const& copy)
{
	std::cout << "[WrongCat] Copy assignement operator" << std::endl;
	if (this != &copy)
		WrongAnimal::operator=(copy);
	return *this;
}

void WrongCat::makeSound(void) const { std::cout << "Wrong meow meow!" << std::endl; }
