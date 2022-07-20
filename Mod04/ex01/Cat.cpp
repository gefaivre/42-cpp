#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;

}

Cat::Cat(const Cat &p)
{
	std::cout << "Cat Copy constructeur called" << std::endl;\
	this->brain = p.brain;
	*this = p;
}

Cat::~Cat(void)
{
	std::cout << "Cat Default destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	this->brain = new Brain;
	*(this->brain) = *(other.brain);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Miaouww" << std::endl;
}

void Cat::setBrain(std::string string, int nb)
{
	this->brain->ideas[nb] = string;
}

std::string Cat::getBrain( int nb ) const
{
	return (this->brain->ideas[nb]);
}

