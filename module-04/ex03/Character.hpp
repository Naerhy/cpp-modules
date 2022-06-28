#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria** _inventory;
		int _inventorySize;

		int checkDouble(AMateria* m) const;

	public:
		Character(std::string const& name);
		Character(Character const& copy);
		virtual ~Character(void);
		Character& operator=(Character const& assign);

		virtual std::string const& getName(void) const;

		virtual void equip(AMateria* m);
		virtual void unequip(int index);
		virtual void use(int index, ICharacter& target);
};

#endif
