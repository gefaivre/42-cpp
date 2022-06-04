#include "Zombie.hpp"
#include <iostream>
#include <string>


Zombie* newZombie( std::string name );
Zombie* randomChump( std::string name );

int main()
{
    std::cout << "create normal" << std::endl;
    Zombie test0( "test0" );
    test0.announce();

    std::cout << "create with fonction" << std::endl;
    Zombie *test1 = newZombie( "test1" );
    test1->announce();
    delete(test1);

    std::cout << "create with randomChump" << std::endl;
    randomChump( "test3" );





}