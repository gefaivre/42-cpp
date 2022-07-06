#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	/* ClapTrap clapTrap("ouioui");
	clapTrap.takeDamage(100);
	clapTrap.attack("dov");
	ScavTrap scavTrap("roger");
	scavTrap.attack("dov");
	scavTrap.takeDamage(100);
	scavTrap.attack("dov");
	scavTrap.guardGate(); */

	FragTrap fragTrap("Nicola");

	fragTrap.attack("dov");
	fragTrap.highFivesGuys();
	
	return 0;
}
