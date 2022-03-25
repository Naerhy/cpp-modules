#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "[Cure] Constructor" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "[Cure] Destructor" << std::endl;
}

Cure *Cure::clone(void) const
{
	return new Cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "Cure: * heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
