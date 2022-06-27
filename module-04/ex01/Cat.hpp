#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;

	public:
		Cat(void);
		Cat(Cat const& copy);
		virtual ~Cat(void);
		Cat& operator=(Cat const& copy);

		virtual void makeSound(void) const;
};

#endif
