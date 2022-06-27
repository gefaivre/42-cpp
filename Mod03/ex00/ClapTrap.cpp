#include "ClapTrap.hpp"
#include <iostream>

	ClapTrap::ClapTrap( std::string name ){

	}

	ClapTrap::ClapTrap( const ClapTrap &p){
		*this = p;
	}

	ClapTrap::~ClapTrap( void ){

	}

	ClapTrap & ClapTrap::operator=( const ClapTrap &other ){
		return *this;
	}

	std::string ClapTrap::getName() const{
		return (this->name);
	}

	int ClapTrap::getHitPoints() const{
		return (this->hitPoints);
	}

	int ClapTrap::getEnergyPoints() const{
		return (this->energyPoints);
	}

	int ClapTrap::getAttackDamage() const{
		return (this->attackDamage);
	}

	void ClapTrap::attack(const std::string& target){

		std::cout << "ClapTrap " << this->getName() <<  " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount){

		std::cout << "ClapTrap " << this->getName() <<  " takes " << amount << " points of damage!" << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount){
		std::cout << "ClapTrap " << this->getName() <<  " gets " << amount << " PV" << std::endl;
	}

