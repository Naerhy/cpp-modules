#ifndef __HUMAN_A_H____
#define __HUMAN_A_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon const& _weapon;

public:
	HumanA(std::string const& name, Weapon const& weapon);
	void attack(void) const;
};

#endif
