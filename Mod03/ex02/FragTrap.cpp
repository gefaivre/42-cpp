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

void FragTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else if (this->energyPoints <= 0 && this->hitPoints <= 0)
		std::cout << "FragTrap " << this->name << " can't attacks " << target << " because he have " << this->energyPoints << " EnergyPoints and " << this->hitPoints << "HitPoints" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "FragTrap " << this->name << " can't attacks " << target << " because he have " << this->energyPoints << " EnergyPoints" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "FragTrap " << this->name << " can't attacks " << target << " because he have " << this->hitPoints << " Hitpoints" << std::endl;
	else
		std::cout << "No comprendo" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hello can we have an High Five ?" << std::endl;
}