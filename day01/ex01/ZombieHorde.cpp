#include "Zombie.hpp"

Zombie* zombieHorde(int const n, std::string const& name)
{
	Zombie* horde;

	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return horde;
}
