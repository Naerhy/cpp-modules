#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap A("008");
	FragTrap B(A);
	FragTrap C("001");
	C = B;
	return 0;
}
