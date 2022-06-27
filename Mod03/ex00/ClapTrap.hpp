#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {

public:
	ClapTrap( std::string name );
	ClapTrap(const ClapTrap &p);
	~ClapTrap( void );

	ClapTrap&operator=( const ClapTrap &other );

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName()const;
	int getHitPoints()const;
	int getEnergyPoints()const;
	int getAttackDamage()const;



private:

	std::string name;
	int hitPoints = 10;
	int energyPoints = 10;
	int attackDamage = 0;


};


#endif