#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal** animals = new Animal*[20];

	std::cout << "Allocating 10 dogs..." << std::endl;
	for (int i = 0; i < 10; i++)
		*(animals + i) = new Dog();

	std::cout << std::endl;

	std::cout << "Allocating 10 cats..." << std::endl;
	for (int i = 10; i < 20; i++)
		*(animals + i) = new Cat();

	std::cout << std::endl;

	std::cout << "Deleting all animals..." << std::endl;
	for (int i = 0; i < 20; i++)
		delete *(animals + i);
	delete[] animals;

	std::cout << std::endl;

	std::cout << "Creating first cat:" << std::endl;
	Cat A;

	std::cout << std::endl;

	std::cout << "Creating second cat:" << std::endl;
	Cat B;

	std::cout << std::endl;

	std::cout << "Assigning A to B:" << std::endl;
	A = B;

	std::cout << std::endl;

	return 0;
}
