#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;

	public:
		Dog(void);
		Dog(Dog const& copy);
		virtual ~Dog(void);
		Dog& operator=(Dog const& copy);

		virtual void makeSound(void) const;
};

#endif
