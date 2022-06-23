#ifndef __WRONG_CAT_HPP__
#define __WRONG_CAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(WrongCat const &copy);
	virtual ~WrongCat(void);
	WrongCat &operator=(WrongCat const &copy);
	void makeSound(void) const;
};

#endif
