#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "[Dog] Constructor" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const& copy) : Animal(copy) { std::cout << "[Dog] Copy constructor" << std::endl; }

Dog::~Dog(void) { std::cout << "[Dog] Destructor" << std::endl; }

Dog& Dog::operator=(Dog const& copy)
{
	std::cout << "[Dog] Copy assignement operator" << std::endl;
	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

void Dog::makeSound(void) const { std::cout << "Bark bark!" << std::endl; }
