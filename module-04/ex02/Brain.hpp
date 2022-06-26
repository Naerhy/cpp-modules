#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(Brain const& copy);
		virtual ~Brain(void);
		Brain& operator=(Brain const& copy);
};

#endif
