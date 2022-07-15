#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include <iostream>

int main()
{
	{
		Animal animal;
		Cat cat;
		Dog dog;
		std::cout << "------------------------------------" << std::endl;

		std::cout << animal.getType() << std::endl;
		std::cout << cat.getType() << std::endl;
		std::cout << dog.getType() << std::endl;

		std::cout << "------------------------------------" << std::endl;

		animal.makeSound();
		cat.makeSound();
		dog.makeSound();

		std::cout << "------------------------------------" << std::endl;
	}

	std::cout << "------------------------------------" << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << "Dog type output = " << j->getType() << std::endl;
		std::cout << "Cat type output= " << i->getType() << std::endl;
		std::cout << "Animal type output= " << meta->getType() << std::endl;
		std::cout << "Cat Sound output = "; 
		i->makeSound();  // will output the cat sound!
		std::cout << "Dog Sound output = ";
		j->makeSound();
		std::cout << "Animal Sound output = ";
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	std::cout << "------------------------------------" << std::endl;
	{
		Animal *tabAnimal[100];
		for (int i = 0; i < 100; i++)
		{
			if (i < 50)
				tabAnimal[i] = new Cat;
			else
				tabAnimal[i] = new Dog;
		}


		for(int i = 0; i < 100; i++)
			delete tabAnimal[i];
	}
	return 0;
}
