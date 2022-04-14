#ifndef __MUTANT_STACK_HPP__
#define __MUTANT_STACK_HPP__

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(MutantStack const &copy);
	virtual ~MutantStack(void);
	MutantStack &operator=(MutantStack const &copy);
};

#include "MutantStack.tpp"

#endif
