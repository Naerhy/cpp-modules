#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap first("007");
	ClapTrap second(first);
	second.setName("002");
	first.attack(second.getName());
	second.takeDamage(first.getAttack());
	return 0;
}
