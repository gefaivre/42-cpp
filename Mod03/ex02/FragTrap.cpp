#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &p)
{
	std::cout << "FragTrap Copy constructeur called" << std::endl;
	*this = p;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Default destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{

	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hello can we have an High Five ?" << std::endl;
}