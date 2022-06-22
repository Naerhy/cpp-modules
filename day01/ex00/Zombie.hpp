#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string const& name = "???");
	~Zombie(void);
	void announce(void) const;
};

Zombie* newZombie(std::string const& name);
void randomChump(std::string const& name);

#endif
