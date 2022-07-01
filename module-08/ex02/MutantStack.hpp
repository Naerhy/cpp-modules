#ifndef __MUTANT_STACK_HPP__
#define __MUTANT_STACK_HPP__

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack const& copy) : std::stack<T>(copy) {}
		virtual ~MutantStack(void) {}
		MutantStack& operator=(MutantStack const& assign)
		{
			if (this != &assign)
				std::stack<T>::operator=(assign);
			return *this;
		}

		iterator begin(void) { return this->c.begin(); }
		iterator end(void) { return this->c.end(); }
};

#endif
