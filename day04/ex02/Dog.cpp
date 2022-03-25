#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[Dog] Constructor" << std::endl;
	_type = "dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout << "[Dog] Copy constructor" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "[Dog] Destructor" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "[Dog] Copy assignement operator" << std::endl;
	Animal::operator=(copy);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark bark!" << std::endl;
}
