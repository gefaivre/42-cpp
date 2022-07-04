#include "ClapTrap.hpp"
#include <iostream>



int main()
{
	ClapTrap clapTrap("Roger");
	clapTrap.attack("Dov");
	clapTrap.beRepaired(10);
	clapTrap.takeDamage(12);
	clapTrap.takeDamage(12);
	clapTrap.takeDamage(12);
	clapTrap.takeDamage(12);
	clapTrap.attack("Dov");
	std::cout << clapTrap.getEnergyPoints() << std::endl;
	return 0;
}
