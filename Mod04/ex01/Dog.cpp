#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &p)
{
	std::cout << "Dog Copy constructeur called" << std::endl;
	*this = p;
}

Dog::~Dog(void)
{
	std::cout << "Dog Default destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouff" << std::endl;
}
