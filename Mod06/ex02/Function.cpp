#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void)
{

    srand(time(0));
    int random = rand() % 3;
    if (random == 0)
        return( new A());
    if (random == 1)
        return( new B());
    if (random == 2)
        return( new C());
    return (NULL);
}

void identify(Base* p)
{
 
    A * a = dynamic_cast<A*>(p);
    if (a != NULL)
        std::cout << "A"  << std::endl;
    B * b = dynamic_cast<B*>(p);
    if (b != NULL)
        std::cout << "B"  << std::endl;
    C * c = dynamic_cast<C*>(p);
    if (c != NULL)
        std::cout << "C"  << std::endl;
}

void identify(Base& p)
{
    try
    {
        A & a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception & e)
    {
        (void)e;
    }
    try
    {
        B & b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception & e)
    {
        (void)e;
    }
    try
    {
        C & c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception & e)
    {
        (void)e;
    }
    
}