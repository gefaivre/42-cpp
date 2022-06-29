#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{

public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
	Zombie* newZombie( std::string name );

	Zombie *next;

private:
	std::string name;

};

#endif