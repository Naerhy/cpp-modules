#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	ICharacter* edouard = new Character("Edouard");

	AMateria* amateria;
	amateria = source->createMateria("ice");
	edouard->equip(amateria);
	amateria = source->createMateria("cure");
	edouard->equip(amateria);
	amateria = source->createMateria("ice");
	edouard->equip(amateria);
	amateria = source->createMateria("cure");
	edouard->equip(amateria);

	ICharacter* bob = new Character("bob");

	edouard->use(0, *bob);
	edouard->use(1, *bob);

	delete bob;
	delete edouard;
	delete source;

	return 0;
}
