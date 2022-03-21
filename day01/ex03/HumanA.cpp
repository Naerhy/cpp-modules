#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon const &weapon)
	: _name(name), _weapon(weapon) {}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getType()
		<< std::endl;
}
