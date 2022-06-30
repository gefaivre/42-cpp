#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB( void )
{
}

HumanB::HumanB( std::string name )
{
    this->name = name;
}

HumanB::~HumanB( void )
{
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
	if (this->weapon)
    	std::cout << this->name << " attacks with their" << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " can't attack with their weapon because he don't have weapon" << std::endl;
}