#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap A("Test");
	std::cout << A.getName() << " " << A.getAttack() << std::endl;
	A.whoAmI();
	return 0;
}
