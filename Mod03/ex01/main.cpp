#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	{
		ScavTrap scavTrap("Paul");
		scavTrap.guardGate();
		scavTrap.attack("Dov");
	}
	std::cout << "-----------------------------------------------------------------" <<std::endl;
	{
		ScavTrap scavTrap("Paul");
		ClapTrap clapTrap("Yves");
		std::cout << std::endl;
		scavTrap.attack("Dov");
		clapTrap.attack("Dov");
		std::cout << std::endl;
		scavTrap.takeDamage(10);
		clapTrap.takeDamage(10);
		std::cout << std::endl;
	}
	return 0;
}
