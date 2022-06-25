#include "HumanB.hpp"

HumanB::HumanB(std::string const& name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }

void HumanB::attack(void) const
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't hold any weapon..." << std::endl;
}
