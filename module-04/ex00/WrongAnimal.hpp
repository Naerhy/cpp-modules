#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& copy);
		virtual ~WrongAnimal(void);
		WrongAnimal& operator=(WrongAnimal const& copy);
		std::string const& getType(void) const;
		void makeSound(void) const;
};

#endif
