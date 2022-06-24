#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal** animals = new Animal()[20];

	for (int i = 0; i < 10; i++)
		*(animals + i) = new Dog();
	for (int i = 10; i < 20; i++)
		*(animals + i) = new Cat();

	for (int i = 0; i < 20; i++)
		delete *(animals + i);
	delete[] animals;
}
