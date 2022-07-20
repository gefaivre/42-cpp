#include "Bureaucrat.hpp"
#include <iostream>

int main( void )
{
    try
    {
        Bureaucrat robert("Robert", 151); 
        std::cout << robert << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;       
    }
    return (0);
}