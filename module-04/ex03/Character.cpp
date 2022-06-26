#include "Character.hpp"

Character::Character(std::string const& name)
	: _name(name), _inventory(new AMateria*[4]), _nbMaterias(0) {}

Character::Character(Character const& copy)
	: _name(copy._name), _inventory(new AMateria*[4]), _nbMaterias(0)
{
	for (int i = 0; i < copy._nbMaterias; i++)
		_inventory[i] = copy._inventory[i]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < _nbMaterias; i++)
		delete _inventory[i];
	delete[] _inventory;
}

Character& Character::operator=(Character const& assign)
{
	if (this != &assign)
	{
		_name = assign._name;
		for (int i = 0; i < _nbMaterias; i++)
			delete _inventory[i];
		for (int i = 0; i < assign._nbMaterias; i++)
			_inventory[i] = assign._inventory[i]->clone();
	}
	return *this;
}

std::string const& Character::getName(void) const { return _name; }

int Character::getNbMaterias(void) const { return _nbMaterias; }

void Character::equip(AMateria* m)
{
	if (_nbMaterias < 4)
	{
		_inventory[_nbMaterias] = m;
		_nbMaterias++;
	}
}

void Character::unequip(int index)
{
	// delete the materia at x index [?]
	if (index > 0 && index < _nbMaterias)
	{
		_inventory[index] = 0;
		while (index + 1 < _nbMaterias)
		{
			_inventory[index] = _inventory[index + 1];
			index++;
		}
		_nbMaterias--;
	}
}

void Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < _nbMaterias)
		_inventory[index]->use(target);
}
