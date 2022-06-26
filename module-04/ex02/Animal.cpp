#include "Animal.hpp"

Animal::Animal(void) : _type("???") { std::cout << "[Animal] Constructor" << std::endl; }

Animal::Animal(Animal const& copy)
{
	std::cout << "[Animal] Copy constructor" << std::endl;
	_type = copy._type;
}

Animal::~Animal(void) { std::cout << "[Animal] Destructor" << std::endl; }

Animal& Animal::operator=(Animal const& copy)
{
	std::cout << "[Animal] Copy assignement operator" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

std::string const& Animal::getType(void) const { return _type; }
