#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include <iostream>

int main()
{
	//Animal animal;
	/* Cat cat;
	Dog dog; */

	Animal *test = new Cat();

	test->makeSound();

	delete test;
	return 0;
}
