#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "[FragTrap] Constructor" << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "[FragTrap] Copy constructor" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "[FragTra] Copy assignement operator" << std::endl;
	ClapTrap::operator=(copy);
	return *this;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "Positive high fives request" << std::endl;
}
