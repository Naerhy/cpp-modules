#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal A;
	Dog B;
	Animal *C = new Dog;
	Animal *D = new Cat;
	WrongAnimal *E = new WrongCat;
	std::cout << A.getType() << std::endl;
	std::cout << B.getType() << std::endl;
	std::cout << C->getType() << std::endl;
	std::cout << D->getType() << std::endl;
	std::cout << E->getType() << std::endl;
	A.makeSound();
	B.makeSound();
	C->makeSound();
	D->makeSound();
	E->makeSound();
	delete C;
	delete D;
	delete E;
	return 0;
}
