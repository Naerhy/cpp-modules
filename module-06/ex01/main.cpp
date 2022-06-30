#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main(void)
{
	Data* A = new Data();
	A->c = 'A';
	A->i = 1243;
	A->str = "AAAAA";

	Data* B = deserialize(serialize(A));

	std::cout << "c = " << A->c << " | i = " << A->i << " | str = " << A->str << std::endl;
	std::cout << "c = " << B->c << " | i = " << B->i << " | str = " << B->str << std::endl;

	delete A;

	return 0;
}
