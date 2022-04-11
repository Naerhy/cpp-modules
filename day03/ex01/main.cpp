#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap A("005");
	ScavTrap B("002");
	B.attack(A.getName());
	A.takeDamage(B.getAttack());
	std::cout << A.getHealth() << std::endl;
	A.beRepaired(3);
	std::cout << A.getHealth() << std::endl;
	return 0;
}
