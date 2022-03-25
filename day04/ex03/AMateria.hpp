#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <string>
#include <iostream>

class AMateria
{
protected:
	std::string _type;

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	virtual ~AMateria(void);
	AMateria &operator=(AMateria const &copy);

	std::string const &getType(void) const;

	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#endif
