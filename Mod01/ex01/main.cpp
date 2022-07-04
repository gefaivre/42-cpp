#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
    Zombie *horde = NULL;
    Zombie *mover = NULL;

    horde = zombieHorde( 10, "zonzon" );
    mover = horde;
    while (mover != NULL)
    {
        mover->announce();
        mover = mover->getNext();
    }
    mover = horde;
    while (mover != NULL)
    {
        Zombie *deleteThis = mover;
        mover = mover->getNext();
        delete(deleteThis);
    }
    return(0);
}