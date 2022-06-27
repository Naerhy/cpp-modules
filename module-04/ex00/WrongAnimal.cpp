#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Wrong???")
{
	std::cout << "[WrongAnimal] Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy) : _type(copy._type)
{
	std::cout << "[WrongAnimal] Copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void) { std::cout << "[WrongAnimal] Destructor" << std::endl; }

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& copy)
{
	std::cout << "[WrongAnimal] Copy assignement operator" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

std::string const& WrongAnimal::getType(void) const { return _type; }

void WrongAnimal::makeSound(void) const { std::cout << "No sound..." << std::endl; }
