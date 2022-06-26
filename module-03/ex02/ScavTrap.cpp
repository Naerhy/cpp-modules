#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
	std::cout << "\033[32m[ScavTrap] Constructor\033[0m" << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap(copy)
{
	std::cout << "\033[32m[ScavTrap] Copy constructor\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[32m[ScavTrap] Destructor\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
	std::cout << "\033[32m[ScavTrap] Copy assignement operator\033[0m" << std::endl;
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

void ScavTrap::attack(std::string const& target)
{
	if (!_health || !_energy)
		std::cout << "No health or energy left..." << std::endl;
	else
	{
		std::cout << "ScavTrap <" << _name << "> attacks <" << target
			<< ">, for " << _attack << " points of damage!" << std::endl;
		_energy--;
	}
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap <" << _name << "> is now in gate keeper mode" << std::endl;
}
