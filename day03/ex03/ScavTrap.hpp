#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap(void);
	ScavTrap &operator=(ScavTrap const &copy);

	void attack(std::string const &target);
	void guardGate(void) const;
};

#endif
