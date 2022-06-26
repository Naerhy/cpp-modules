#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

		AMateria(AMateria const& copy);
		AMateria& operator=(AMateria const& assign);

	public:
		AMateria(std::string const& type);
		virtual ~AMateria(void);

		std::string const& getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
