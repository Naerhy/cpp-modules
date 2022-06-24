#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal* A = new Animal();
	Animal* B = new Dog();
	Animal* C = new Cat();

	std::cout << std::endl;

	std::cout << "Type of A = " << A->getType() << std::endl;
	std::cout << "Type of B = " << B->getType() << std::endl;
	std::cout << "Type of C = " << C->getType() << std::endl;

	std::cout << std::endl;

	A->makeSound();
	B->makeSound();
	C->makeSound();

	std::cout << std::endl;

	delete A;
	delete B;
	delete C;

	std::cout << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << std::endl;

	WrongAnimal* WA = new WrongAnimal();
	WrongAnimal* WC = new WrongCat();

	std::cout << std::endl;

	std::cout << "Type of WA = " << WA->getType() << std::endl;
	std::cout << "Type of WC = " << WC->getType() << std::endl;

	std::cout << std::endl;

	WA->makeSound();
	WC->makeSound();

	std::cout << std::endl;

	delete WA;
	delete WC;
}
