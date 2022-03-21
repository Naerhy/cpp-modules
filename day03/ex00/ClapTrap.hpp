#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;
	int _health;
	int _energy;
	int _attack;

public:
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap(void);
	ClapTrap &operator=(ClapTrap const &copy);

	void setName(std::string const &name);
	void setHealth(int const health);
	void setEnergy(int const energy);
	void setAttack(int const attack);
	std::string const &getName(void) const;
	int const getHealth(void) const;
	int const getEnergy(void) const;
	int const getAttack(void) const;

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
