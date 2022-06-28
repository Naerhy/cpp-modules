#include "Character.hpp"

int Character::_checkDouble(AMateria* m) const
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == m)
			return 1;
	}
	return 0;
}

void Character::_storeUnequipped(AMateria* m)
{
	if (_unequippedSize == 100)
	{
		for (int i = 0; i < _unequippedSize; i++)
			delete _unequipped[i];
		_unequippedSize = 0;
	}
	_unequipped[_unequippedSize] = m;
	_unequippedSize++;
}

void Character::_deleteUnequipped(void)
{
	for (int i = 0; i < _unequippedSize; i++)
		delete _unequipped[i];
	delete[] _unequipped;
}

Character::Character(std::string const& name)
	: _name(name), _inventory(new AMateria*[4]), _inventorySize(0),
	_unequipped(new AMateria*[100]), _unequippedSize(0) {}

Character::Character(Character const& copy)
	: _name(copy._name), _inventory(new AMateria*[4]), _inventorySize(copy._inventorySize),
	_unequipped(new AMateria*[100]), _unequippedSize(copy._unequippedSize)
{
	for (int i = 0; i < copy._inventorySize; i++)
		_inventory[i] = copy._inventory[i]->clone();
	for (int i = 0; i < copy._unequippedSize; i++)
		_unequipped[i] = copy._unequipped[i]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < _inventorySize; i++)
		delete _inventory[i];
	delete[] _inventory;
	_deleteUnequipped();
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

		for(int i = 0; i < _unequippedSize; i++)
			delete _unequipped[i];
		for (int i = 0; i < assign._unequippedSize; i++)
			_unequipped[i] = assign._unequipped[i]->clone();
		_unequippedSize = assign._unequippedSize;
	}
	return *this;
}

std::string const& Character::getName(void) const { return _name; }

void Character::equip(AMateria* m)
{
	if (_inventorySize < 4 && !_checkDouble(m))
	{
		_inventory[_inventorySize] = m;
		_inventorySize++;
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < _inventorySize)
	{
		_storeUnequipped(_inventory[index]);
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
