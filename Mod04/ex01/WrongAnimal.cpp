#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	this->type = "...";
}

WrongAnimal::WrongAnimal(const WrongAnimal &p)
{
	std::cout << "WrongAnimal Copy constructeur called" << std::endl;
	*this = p;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Default destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}