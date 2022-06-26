#ifndef __IMATERIA_SOURCE_HPP__
#define __IMATERIA_SOURCE_HPP__

#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
