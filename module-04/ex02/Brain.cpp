#include "Brain.hpp"

Brain::Brain(void) : _ideas() { std::cout << "[Brain] Constructor" << std::endl; }

Brain::Brain(Brain const& copy)
{
	std::cout << "[Brain] Copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain::~Brain(void) { std::cout << "[Brain] Destructor" << std::endl; }

Brain& Brain::operator=(Brain const& copy)
{
	std::cout << "[Brain] Copy assignement operator" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	return *this;
}
