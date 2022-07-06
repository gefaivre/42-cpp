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
	std::cout << getName() << " is now in Gate kepper mode" << std::endl; 
}

void ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else if (getEnergyPoints() <= 0 && getHitPoints() <= 0)
		std::cout << "ScavTrap " << getName() << " can't attacks " << target << " because he have " << getEnergyPoints() << " EnergyPoints and " << getHitPoints() << "HitPoints" << std::endl;
	else if (getEnergyPoints() <= 0)
		std::cout << "ScavTrap " << getName() << " can't attacks " << target << " because he have " << getEnergyPoints() << " EnergyPoints" << std::endl;
	else if (getHitPoints() <= 0)
		std::cout << "ScavTrap " << getName() << " can't attacks " << target << " because he have " << getHitPoints() << " Hitpoints" << std::endl;
	else
		std::cout << "No comprendo" << std::endl;
}
