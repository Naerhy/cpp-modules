#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap first("001");
	ClapTrap second("002");
	ClapTrap third(first);

	std::cout << std::endl;

	second = first;

	std::cout << std::endl;

	first.attack(second.getName());
	second.takeDamage(first.getAttack());
	second.beRepaired(3);

	std::cout << std::endl;

	do
	{
		third.attack(second.getName());
		second.takeDamage(third.getAttack());
	} while (third.getEnergy());

	std::cout << std::endl;

	third.attack(second.getName());

	std::cout << std::endl;

	return 0;
}
