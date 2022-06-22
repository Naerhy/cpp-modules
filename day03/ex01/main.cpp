#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap first("001");
	ScavTrap second("002");
	ScavTrap third(first);

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

	first.guardGate();
	third.guardGate();

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
