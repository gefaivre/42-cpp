#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &p)
{
	std::cout << "ScavTrap Copy constructeur called" << std::endl;
	*this = p;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Default destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{

	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << this->name << " is now in Gate kepper mode" << std::endl; 
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else if (this->energyPoints <= 0 && this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " can't attacks " << target << " because he have " << this->energyPoints << " EnergyPoints and " << this->hitPoints << "HitPoints" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " can't attacks " << target << " because he have " << this->energyPoints << " EnergyPoints" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " can't attacks " << target << " because he have " << this->hitPoints << " Hitpoints" << std::endl;
	else
		std::cout << "No comprendo" << std::endl;
}
