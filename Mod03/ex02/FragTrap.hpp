#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &p);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);

	void attack(const std::string &target);

	void highFivesGuys(void);

private:

	FragTrap(void);
};

#endif