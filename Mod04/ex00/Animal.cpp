#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string name)
{
	std::cout << "Animal Constructor called" << std::endl;
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

