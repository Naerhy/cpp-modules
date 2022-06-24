#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(Animal const& copy);
		virtual ~Animal(void);
		Animal& operator=(Animal const& copy);
		std::string const& getType(void) const;
		virtual void makeSound(void) const;
};

#endif
