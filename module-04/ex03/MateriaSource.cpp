#include "MateriaSource.hpp"

int MateriaSource::_checkDouble(AMateria* m) const
{
	for (int i = 0; i < _listSize; i++)
	{
		if (_list[i] == m)
			return 1;
	}
	return 0;
}

MateriaSource::MateriaSource(void) : _list(new AMateria*[4]), _listSize(0) {}

MateriaSource::MateriaSource(MateriaSource const& copy)
	: _list(new AMateria*[4]), _listSize(copy._listSize)
{
	for (int i = 0; i < copy._listSize; i++)
		_list[i] = copy._list[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _listSize; i++)
		delete _list[i];
	delete[] _list;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < _listSize; i++)
			delete _list[i];
		for (int i = 0; i < assign._listSize; i++)
			_list[i] = assign._list[i]->clone();
		_listSize = assign._listSize;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_listSize < 4 && !_checkDouble(m))
	{
		_list[_listSize] = m;
		_listSize++;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < _listSize; i++)
	{
		if (_list[i]->getType() == type)
			return _list[i]->clone();
	}
	return NULL;
}
