#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include "ScavTrap.hpp"

class FragTrap: public ScavTrap
{

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &p);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);

private:

	FragTrap(void);
};

#endif