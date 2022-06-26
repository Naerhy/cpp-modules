#ifndef __MATERIA_SOURCE_HPP__
#define __MATERIA_SOURCE_HPP__

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria** _list;
		int _listSize;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& copy);
		virtual ~MateriaSource(void);
		MateriaSource& operator=(MateriaSource const& assign);

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const& type);
};

#endif
