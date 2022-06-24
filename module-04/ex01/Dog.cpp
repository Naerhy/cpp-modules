#include "Dog.hpp"

Dog::Dog(void) : _brain(new Brain())
{
	std::cout << "[Dog] Constructor" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const& copy) : Animal(copy), _brain(new Brain())
{
	std::cout << "[Dog] Copy constructor" << std::endl;
	*(_brain) = *(copy._brain);
}

Dog::~Dog(void)
{
	std::cout << "[Dog] Destructor" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(Dog const& copy)
{
	std::cout << "[Dog] Copy assignement operator" << std::endl;
	Animal::operator=(copy);
	*(_brain) = *(copy._brain);
	return *this;
}

void Dog::makeSound(void) const { std::cout << "Bark bark!" << std::endl; }
