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
	Zombie* getNext();
	void	setNext(Zombie *zonzon);


private:
	Zombie *next;
	std::string name;

};

Zombie* zombieHorde( int N, std::string name );

#endif