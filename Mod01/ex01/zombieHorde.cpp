#include "Zombie.hpp"
#include <iostream>
#include <string>


Zombie* zombieHorde( int N, std::string name )
{
	if (N == 0)
		return(NULL);
	Zombie *horde = new Zombie( name );
	horde->setNext( NULL );
	if (N == 1)
		return (horde);
	Zombie *mover = horde;
	for(int i = 1; i < N; i++)
	{
		mover->setNext( new Zombie( name ) );
		mover = mover->getNext();
		mover ->setNext( NULL );
	}
	return (horde);
}