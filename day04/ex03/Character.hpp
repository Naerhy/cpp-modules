#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materias[4];
	int _nbMaterias;

public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual ~Character(void);
	Character &operator=(Character const &copy);
	
	std::string getName(void) const;
	void equip(AMateria *m);
	void unequip(int index);
	void use(int index, ICharacter &target);
};

#endif
