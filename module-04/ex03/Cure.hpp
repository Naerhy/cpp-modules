#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	Cure(Cure const &copy);
	Cure &operator=(Cure const &copy);

public:
	Cure(void);
	virtual ~Cure(void);
	
	virtual Cure *clone(void) const;
	virtual void use(ICharacter &target);
};

#endif
