#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap first("007");
	ClapTrap second("001");
	first.attack(second.getName());
	second.takeDamage(first.getAttack());
	std::cout << second.getHealth() << std::endl;
	second.beRepaired(3);
	std::cout << second.getHealth() << std::endl;
	return 0;
}
