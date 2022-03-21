#ifndef __HUMAN_B_H____
#define __HUMAN_B_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string const &name);
	void setWeapon(Weapon const &weapon);
	void attack(void) const;
};

#endif
