#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name)
	: _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "[ClapTrap] Constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "[ClapTrap] Copy constructor" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] Destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	std::cout << "[ClapTrap] Copy assignement operator" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_attack = copy._attack;
	}
	return *this;
}

std::string const &ClapTrap::getName(void) const { return _name; }
int ClapTrap::getHealth(void) const { return _health; }
int ClapTrap::getEnergy(void) const { return _energy; }
int ClapTrap::getAttack(void) const { return _attack; }

void ClapTrap::attack(std::string const &target)
{
	if (!_health || !_energy)
		std::cout << "No health or energy left..." << std::endl;
	else
	{
		std::cout << "ClapTrap <" << _name << "> attacks <" << target
			<< ">, for " << _attack << " points of damage!" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> has been attacked and lost "
		<< amount << " health." << std::endl;
	_health -= amount;
	if (_health <= 0)
	{
		_health = 0;
		std::cout << "ClapTrap <" << _name << "> is in critical condition"
			<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_health || !_energy)
		std::cout << "No health or energy left..." << std::endl;
	else
	{
		std::cout << "ClapTrap <" << _name << "> is being repared for "
			<< amount << " health!" << std::endl;
		_health += amount;
		_energy--;
	}
}
