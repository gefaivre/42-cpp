#include "ClapTrap.hpp"
#include <iostream>

	ClapTrap::ClapTrap( std::string name ){
		this->name = name;
		this->hitPoints = 10;
		this->energyPoints = 10;
		this->attackDamage = 0;

	}

	ClapTrap::ClapTrap( const ClapTrap &p){
		*this = p;
	}

	ClapTrap::~ClapTrap( void ){

	}

	ClapTrap & ClapTrap::operator=( const ClapTrap &other ){

		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		return (*this);
	}

	std::string ClapTrap::getName() const{
		return (this->name);
	}

	int ClapTrap::getHitPoints() const{
		return (this->hitPoints);
	}

	void ClapTrap::setHitPoints(int amount){
		this->hitPoints = amount;
	}

	int ClapTrap::getEnergyPoints() const{
		return (this->energyPoints);
	}

	void ClapTrap::setEnergyPoints(int amount){
		this->energyPoints = amount;
	}

	int ClapTrap::getAttackDamage() const{
		return (this->attackDamage);
	}

	void ClapTrap::setAttackDamage(int amount){
		this->attackDamage = amount;
	}

	void ClapTrap::attack(const std::string& target){
		if (this->getEnergyPoints() > 0)
			std::cout << "ClapTrap " << this->getName() <<  " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		else
			std::cout << "ClapTrap " << this->getName() <<  " can't attacks " << target << " because he have " << this->getEnergyPoints() << " PV" << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount){
		this->setEnergyPoints(this->getEnergyPoints() - amount);
		std::cout << "ClapTrap " << this->getName() <<  " takes " << amount << " points of damage!" << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount){
		this->setEnergyPoints(this->getEnergyPoints() + amount);
		std::cout << "ClapTrap " << this->getName() <<  " gets " << amount << " PV" << std::endl;
	}

