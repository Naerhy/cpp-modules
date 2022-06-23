#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const& name);
		FragTrap(FragTrap const& copy);
		~FragTrap(void);
		FragTrap& operator=(FragTrap const& copy);

		void highFivesGuys(void) const;
};

#endif
