#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base * generate(void)
{
    int random = rand() % 3;
    if (random == 0);
        return( new A());
}

void identify(Base* p)
{

}

void identify(Base& p)
{

}