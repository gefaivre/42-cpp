#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap clapTrap("ouioui");
	clapTrap.takeDamage(100);
	clapTrap.attack("dov");
	ScavTrap scavTrap("roger");
	scavTrap.attack("dov");
	scavTrap.takeDamage(100);
	scavTrap.attack("dov");
	scavTrap.guardGate();
	return 0;
}
