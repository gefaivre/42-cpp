#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde( int N, std::string name );

int main()
{
    Zombie *horde = NULL;
    Zombie *mover = NULL;

    horde = zombieHorde( 10, "zonzon" );
    mover = horde;
    while (mover != NULL)
    {
        mover->announce();
        mover = mover->next;
    }
    mover = horde;
    while (mover != NULL)
    {
        Zombie *deleteThis = mover;
        mover = mover->next;
        delete(deleteThis);
    }

    return(0);
}