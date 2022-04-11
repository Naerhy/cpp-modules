#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &copy);
	~DiamondTrap(void);
	DiamondTrap &operator=(DiamondTrap const &copy);

	void whoAmI(void) const;
};

#endif
