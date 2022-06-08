#ifndef HumanB_HPP
#define HumanB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB{

public:
	HumanB( void );
	HumanB( std::string name );
	~HumanB( void );
	void    attack();
	void    setWeapon(Weapon &weapon);
	
private:
	std::string name;
	Weapon *weapon;
};

#endif