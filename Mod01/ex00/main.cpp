#include "Zombie.hpp"
#include "newZombie.cpp"
#include <iostream>
#include <string>



int main()
{
    std::cout << "create with fonction" << std::endl;
    Zombie *test0 = newZombie( "test0" );
    test0->announce();
    delete(test0);

    std::cout << "create normal" << std::endl;
    Zombie test1( "test1" );
    test1.announce();


}