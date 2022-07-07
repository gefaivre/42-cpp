#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor called" << std::endl;
	this->type = "...";
}

Animal::Animal(const Animal &p)
{
	std::cout << "Animal Copy constructeur called" << std::endl;
	*this = p;
}

Animal::~Animal(void)
{
	std::cout << "Animal Default destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}
