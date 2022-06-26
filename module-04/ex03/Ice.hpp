#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		Ice(Ice const& copy);
		Ice& operator=(Ice const& assign);

	public:
		Ice(void);
		virtual ~Ice(void);

		virtual Ice* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
