#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongDog::WrongDog(void)
{
	std::cout << "WrongDog Default Constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &p)
{
	std::cout << "WrongDog Copy constructeur called" << std::endl;
	*this = p;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog Default destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
	this->type = other.type;
	return (*this);
}

void WrongDog::makeSound(void) const
{
	std::cout << "Wouff" << std::endl;
}
