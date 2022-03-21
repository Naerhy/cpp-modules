#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string const &name = "Unknown");
	~Zombie(void);
	void announce(void) const;
};

Zombie *newZombie(std::string const &name);
void randomChump(std::string const &name);

#endif
