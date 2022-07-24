#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
    Base *test = generate();
    identify(test);
    identify(*test);
    delete test;

    return 0;
}