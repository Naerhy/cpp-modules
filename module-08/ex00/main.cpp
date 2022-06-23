#include <iostream>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vect;
	for (int i = 0; i < 5; i++)
		vect.push_back(i);

	std::cout << easyfind(vect, 7) << std::endl;
	return 0;
}
