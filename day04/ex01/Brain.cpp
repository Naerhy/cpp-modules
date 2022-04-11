#include "Brain.hpp"

Brain::Brain(void) : _ideas()
{
	std::cout << "[Brain] Constructor" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "[Brain] Copy constructor" << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "[Brain] Destructor" << std::endl;
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << "[Brain] Copy assignement operator" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, std::string const &idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return _ideas[index];
}
