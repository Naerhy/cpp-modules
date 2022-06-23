#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap first("001");
	DiamondTrap second("002");
	DiamondTrap third(first);

	std::cout << std::endl;

	second = first;

	std::cout << std::endl;

	std::cout << "name = " << first.getName() << " | health = " << first.getHealth()
	<< " | energy = " << first.getEnergy() << " | attack = " << first.getAttack() << std::endl;

	std::cout << std::endl;

	first.attack(second.getName());
	second.takeDamage(first.getAttack());
	second.beRepaired(3);

	std::cout << std::endl;

	first.whoAmI();
	third.whoAmI();

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
