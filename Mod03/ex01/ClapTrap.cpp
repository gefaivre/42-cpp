#include "ClapTrap.hpp"
#include <iostream>

	ClapTrap::ClapTrap( std::string name )
	{
		std::cout << "Constructor called" << std::endl;
		this->name = name;
		this->hitPoints = 10;
		this->energyPoints = 10;
		this->attackDamage = 0;
	}

	ClapTrap::ClapTrap( const ClapTrap &p)
	{
		std::cout << "Copy constructeur colled" << std::endl;
		*this = p;
	}

	ClapTrap::~ClapTrap( void )
	{
		std::cout << "Default destructor called" << std::endl;
	}

	ClapTrap &ClapTrap::operator=( const ClapTrap &other )
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

	void ClapTrap::setHitPoints(int amount){
		this->hitPoints = amount;
	}

	int ClapTrap::getEnergyPoints() const
	{
		return (this->energyPoints);
	}

	void ClapTrap::setEnergyPoints(int amount)
	{
		this->energyPoints = amount;
	}

	int ClapTrap::getAttackDamage() const
	{
		return (this->attackDamage);
	}

	void ClapTrap::setAttackDamage(int amount)
	{
		this->attackDamage = amount;
	}

	void ClapTrap::attack(const std::string& target)
	{
		if (getEnergyPoints() > 0 && getHitPoints() > 0)
		{
			std::cout << "ClapTrap " << getName() <<  " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
			setEnergyPoints(getEnergyPoints() - 1);
		}
		else if (getEnergyPoints() <= 0 && getHitPoints() <= 0)
			std::cout << "ClapTrap " << getName() <<  " can't attacks " << target << " because he have " << getEnergyPoints() << " EnergyPoints and " << getHitPoints() << "HitPoints" << std::endl;
		else if (getEnergyPoints() <= 0)
			std::cout << "ClapTrap " << getName() <<  " can't attacks " << target << " because he have " << getEnergyPoints() << " EnergyPoints" << std::endl;
		else if (getHitPoints() <= 0)
			std::cout << "ClapTrap " << getName() <<  " can't attacks " << target << " because he have " << getHitPoints() << " Hitpoints" << std::endl;
		else
			std::cout << "No comprendo" << std::endl;

	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		if (getEnergyPoints() > 0 && getHitPoints() > 0)
		{
			setHitPoints(getHitPoints() - amount);
			std::cout << "ClapTrap " << getName() <<  " takes " << amount << " points of damage!" << std::endl;
		}
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		if (getEnergyPoints() > 0 && getHitPoints() > 0)
		{
			std::cout << "ClapTrap " << getName() <<  " gets " << amount << " HitPoints" << std::endl;
			setHitPoints(getHitPoints() + amount);
		}
		else if (getEnergyPoints() <= 0 && getHitPoints() <= 0)
			std::cout << "ClapTrap " << getName() <<  " can't gets " << amount << "HitPoints because he have " << getEnergyPoints() << " EnergyPoints and " << getHitPoints() << "HitPoints" << std::endl;
		else if (getEnergyPoints() <= 0)
			std::cout << "ClapTrap " << getName() <<  " can't gets " << amount << "HitPoints because he have " << getEnergyPoints() << " EnergyPoints" << std::endl;
		else if (getHitPoints() <= 0)
			std::cout << "ClapTrap " << getName() <<  " can't gets " << amount << "HitPoints because he have " << getHitPoints() << " Hitpoints" << std::endl;
		else
			std::cout << "No comprendo" << std::endl;

	}

