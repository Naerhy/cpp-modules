#include "Character.hpp"

Character::Character(std::string const &name)
	: _name(name), _materias(), _nbMaterias(0) {} // initialize array values to null

Character::Character(Character const &copy)
{
	std::cout << "[Character] Copy constructor  " << std::endl;
	*this = copy;
}

Character::~Character(void)
{
	std::cout << "[Character] Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}

Character Character::&operator=(Character const &copy)
{
	std::cout << "[Character] Copy assignement operator" << std::endl;
	if (this != copy)
	{
		_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			delete _materias[i];
			_materias[i] = copy._materias[i];
		}
		_nbMaterias = copy._materias[i]// use clone because we disabled copy assignement
	}
	return *this;
}

std::string Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (_nbMaterias == 4)
		std::cout << "Inventory is full" << std::endl;
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_materias[i])
				_materias[i] = m;
		}
		_nbMaterias++;
	}
}

void Character::unequip(int index) // do not forget to delete unequipped materia
{
	if (index < 0 || index > 3 || !_materias[index])
		std::cout << "Unable to unequip empty slot" << std::endl;
	else
	{
		_materias[index] = 0;
		_nbMaterias--;
	}
}

void Character::use(int index, ICharacter &target)
{
	if (index < 0 || index > 3 || !_materias[index])
		std::cout << "Invalid materia to use" << std::endl;
	else
		_materias[index].use(target);
}
