#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name)
	: ClapTrap(name + "_clap_name"), ScavTrap(""), FragTrap(""), _name(name)
{
	std::cout << "[DiamondTrap] Constructor" << std::endl;
	_energy = 50;
	_attack = 20;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
	: ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "[DiamondTrap] Copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DiamondTrap] Destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "[DiamondTrap] Copy assignement operator" << std::endl;
	ClapTrap::operator=(copy);
	return *this;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap name: " << _name << " - ClapTrap name: "
		<< ClapTrap::_name << std::endl;
}
