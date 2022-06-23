#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "[Cat] Constructor" << std::endl;
	_type = "cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "[Cat] Copy constructor" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "[Cat] Destructor" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "[Cat] Copy assignement operator" << std::endl;
	Animal::operator=(copy);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow meow!" << std::endl;
}
