#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie( void )
{
    std::cout << "Constructer Zombie" << std::endl;
}

Zombie::Zombie( std::string name )
{
    std::cout << "Constructer Zombie Whith the name : " << name << std::endl;
    this->name = name;
}

Zombie::~Zombie( void )
{
    std::cout << "Destructer " << this->name << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}