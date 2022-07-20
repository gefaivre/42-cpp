#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &p)
{
	std::cout << "Brain Copy constructeur called" << std::endl;
	*this = p;
}

Brain::~Brain(void)
{
	std::cout << "Brain Default destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}