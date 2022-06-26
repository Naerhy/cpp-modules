#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const& name) : ClapTrap(name)
{
	std::cout << "\033[34m[FragTrap] Constructor\033[0m" << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap(copy)
{
	std::cout << "\033[34m[FragTrap] Copy constructor\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[34m[FragTrap] Destructor\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& copy)
{
	std::cout << "\033[34m[FragTrap] Copy assignement operator\033[0m" << std::endl;
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "High fives request!!" << std::endl;
}
