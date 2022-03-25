#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "[Ice] Constructor" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "[Ice] Destructor" << std::endl;
}

Ice *Ice::clone(void) const
{
	return new Ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "Ice: * shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}
