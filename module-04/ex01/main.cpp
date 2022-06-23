#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal A;
	Dog B;
	Animal *C = new Dog;
	Animal *D = new Cat;
	std::cout << A.getType() << std::endl;
	std::cout << B.getType() << std::endl;
	std::cout << C->getType() << std::endl;
	std::cout << D->getType() << std::endl;
	A.makeSound();
	B.makeSound();
	C->makeSound();
	D->makeSound();
	delete C;
	delete D;
	return 0;
}
