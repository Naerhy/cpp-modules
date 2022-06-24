#include "Cat.hpp"

Cat::Cat(void) : _brain(new Brain())
{
	std::cout << "[Cat] Constructor" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const& copy) : Animal(copy), _brain(new Brain())
{
	std::cout << "[Cat] Copy constructor" << std::endl;
	*(_brain) = *(copy._brain);
}

Cat::~Cat(void)
{
	std::cout << "[Cat] Destructor" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(Cat const& copy)
{
	std::cout << "[Cat] Copy assignement operator" << std::endl;
	Animal::operator=(copy);
	*(_brain) = *(copy._brain);
	return *this;
}

void Cat::makeSound(void) const { std::cout << "Meow meow!" << std::endl; }
