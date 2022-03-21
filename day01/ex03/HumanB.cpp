#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : _name(name) {}

void HumanB::setWeapon(Weapon const &weapon)
{
	*_weapon = weapon;
}

void HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon->getType()
		<< std::endl;
}
