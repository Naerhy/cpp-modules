#include "Character.hpp"

int Character::checkDouble(AMateria* m) const
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == m)
			return 1;
	}
	return 0;
}

Character::Character(std::string const& name)
	: _name(name), _inventory(new AMateria*[4]), _inventorySize(0) {}

Character::Character(Character const& copy)
	: _name(copy._name), _inventory(new AMateria*[4]), _inventorySize(copy._inventorySize)
{
	for (int i = 0; i < copy._inventorySize; i++)
		_inventory[i] = copy._inventory[i]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < _inventorySize; i++)
		delete _inventory[i];
	delete[] _inventory;
}

Character& Character::operator=(Character const& assign)
{
	if (this != &assign)
	{
		_name = assign._name;
		for (int i = 0; i < _inventorySize; i++)
			delete _inventory[i];
		for (int i = 0; i < assign._inventorySize; i++)
			_inventory[i] = assign._inventory[i]->clone();
		_inventorySize = assign._inventorySize;
	}
	return *this;
}

std::string const& Character::getName(void) const { return _name; }

void Character::equip(AMateria* m)
{
	if (_inventorySize < 4 && !checkDouble(m))
	{
		_inventory[_inventorySize] = m;
		_inventorySize++;
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < _inventorySize)
	{
		_inventory[index] = 0;
		while (index + 1 < _inventorySize)
		{
			_inventory[index] = _inventory[index + 1];
			index++;
		}
		_inventorySize--;
	}
}

void Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < _inventorySize)
		_inventory[index]->use(target);
}
