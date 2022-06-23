#include "Zombie.hpp"

int main(void)
{
	Zombie* heapZombie;

	heapZombie = newZombie("Gunther");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Max");
	return 0;
}
