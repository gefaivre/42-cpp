#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &p)
{
	std::cout << "ClapTrap Copy constructeur called" << std::endl;
	*this = p;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{

	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else if (this->energyPoints <= 0 && this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't attacks " << target << " because he have " << this->energyPoints << " EnergyPoints and " << this->hitPoints << " HitPoints" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't attacks " << target << " because he have " << this->energyPoints << " EnergyPoints" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't attacks " << target << " because he have " << this->hitPoints << " Hitpoints" << std::endl;
	else
		std::cout << "No comprendo" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " gets " << amount << " HitPoints" << std::endl;
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
	else if (this->energyPoints <= 0 && this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't gets " << amount << " HitPoints because he have " << this->energyPoints << " EnergyPoints and " << this->hitPoints << " HitPoints" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't gets " << amount << " HitPoints because he have " << this->energyPoints << " EnergyPoints" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't gets " << amount << " HitPoints because he have " << this->hitPoints << " Hitpoints" << std::endl;
	else
		std::cout << "No comprendo" << std::endl;
}

