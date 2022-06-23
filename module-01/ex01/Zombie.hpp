#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string const& name = "???");
		~Zombie(void);
		void setName(std::string const& name);
		void announce(void) const;
};

Zombie* zombieHorde(int const n, std::string const& name);

#endif
