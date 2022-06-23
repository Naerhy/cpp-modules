#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "[AMateria] Constructor" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	std::cout << "[AMateria] Copy constructor" << std::endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	std::cout << "[AMateria] Destructor" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &copy)
{
	std::cout << "[AMateria] Copy assignement operator" << std::endl;
	if (this != copy)
		_type = copy._type;
	return *this;
}

std::string const &AMateria::getType(void) const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria: unknown utility for " << _type
		<< " to " << target.getName() << std::endl;
}
