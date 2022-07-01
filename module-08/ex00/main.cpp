#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vect;
	for (int i = 0; i < 20; i++)
		vect.push_back(i);

	std::cout << easyfind(vect, 7) << std::endl;
	std::cout << "displaying value at index: " << vect.at(easyfind(vect, 7)) << std::endl;
	std::cout << easyfind(vect, 36) << std::endl;

	std::cout << std::endl;

	std::deque<int> deq;
	for (int i = 0; i < 20; i++)
		deq.push_front(i);

	std::cout << easyfind(deq, 7) << std::endl;
	std::cout << "displaying value at index: " << deq.at(easyfind(deq, 7)) << std::endl;
	std::cout << easyfind(deq, 36) << std::endl;

	return 0;
}
