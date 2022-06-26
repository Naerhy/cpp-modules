#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const& name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "\033[35m[DiamondTrap] Constructor\033[0m" << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy)
	: ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "\033[35m[DiamondTrap] Copy constructor\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[35m[DiamondTrap] Destructor\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& copy)
{
	std::cout << "\033[35m[DiamondTrap] Copy assignement operator\033[0m" << std::endl;
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
		_name = copy._name;
	}
	return *this;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "[DiamondTrap name: " << _name << " - ClapTrap name: "
		<< ClapTrap::_name << std::endl;
}
