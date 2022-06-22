#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int _health;
		int _energy;
		int _attack;

	public:
		ClapTrap(std::string const& name);
		ClapTrap(ClapTrap const& copy);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& copy);

		std::string const& getName(void) const;
		int getHealth(void) const;
		int getEnergy(void) const;
		int getAttack(void) const;

		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
