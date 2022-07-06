#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	{
		FragTrap fragTrap("Nicolas");
		fragTrap.highFivesGuys();
	}
	std::cout << "-----------------------------------------------------------------" <<std::endl;
	{
		FragTrap fragTrap("Nicolas");
		fragTrap.highFivesGuys();
	}

	return 0;
}
