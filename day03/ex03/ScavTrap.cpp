#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "[ScavTrap] Constructor" << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	std::cout << "[ScavTrap] Copy constructor" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "[ScavTrap] Copy assignement operator" << std::endl;
	ClapTrap::operator=(copy);
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	if (!_health || !_energy)
		std::cout << "No health or energy left..." << std::endl;
	else
	{
		std::cout << "[ScavTrap] " << _name << " attacks <" << target
			<< ">, for " << _attack << " points of damage!" << std::endl;
		_energy--;
	}
}

void ScavTrap::guardGate(void) const
{
	std::cout << "[ScavTrap] " << _name << " is now in gate keeper mode"
		<< std::endl;
}
