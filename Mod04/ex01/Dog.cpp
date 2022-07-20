#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog &p)
{
	std::cout << "Dog Copy constructeur called" << std::endl;
	*this = p;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog Default destructor called" << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain;
	*(this->brain) = *(other.brain);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouff" << std::endl;
}

void Dog::setBrain(std::string string, int nb)
{
	this->brain->ideas[nb] = string;
}

std::string Dog::getBrain( int nb ) const
{
	return (this->brain->ideas[nb]);
}
