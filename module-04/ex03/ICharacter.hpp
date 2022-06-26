#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__

#include <string>
class ICharacter;
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter(void) {}
		virtual std::string const& getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int index) = 0;
		virtual void use(int index, ICharacter& target) = 0;
};

#endif
