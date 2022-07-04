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

	std::string getName() const;
	int getHitPoints() const;
	void setHitPoints( int );
	int getEnergyPoints() const;
	void setEnergyPoints( int );
	int getAttackDamage() const;
	void setAttackDamage( int );

private:

	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage ;

};


#endif