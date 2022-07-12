#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	ideas = new Brain;

}

Cat::Cat(const Cat &p)
{
	std::cout << "Cat Copy constructeur called" << std::endl;
	*this = p;
}

Cat::~Cat(void)
{
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaouww" << std::endl;
}

