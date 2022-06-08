#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string type )
{
    this->type = type;
    std::cout << this->type << std::endl;
}
Weapon::~Weapon()
{
}

void		Weapon::setType( std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType() const
{
    return (this->type);
}


