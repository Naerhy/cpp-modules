#ifndef __EASYFIND_HP__
#define __EASYFIND_HPP__

#include <vector>

template <typename T>
int easyfind(T const &vect, int toFind)
{
	typename T::const_iterator begin = vect.begin();
	typename T::const_iterator end = vect.end();

	for (int i = 0; begin != end; begin++, i++)
	{
		if (*begin == toFind)
			return i;
	}
	return -1;
}

#endif

