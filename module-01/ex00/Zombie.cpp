#include "Zombie.hpp"

Zombie::Zombie(std::string const& name) : _name(name) {}

Zombie::~Zombie(void)
{
	std::cout << _name << " has been killed..." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
