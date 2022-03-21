#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap A("Miss");
	A.setHealth(50);
	ScavTrap B(A);
	ScavTrap C("Mister");
	C = A;
	std::cout << A.getHealth() << std::endl;
	std::cout << B.getHealth() << std::endl;
	A.attack("Quentin");
	return 0;
}
