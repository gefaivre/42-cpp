#include "iter.hpp"
#include <string>
#include <iostream>


void print(std::string  & string)
{
    std::cout << string << std::endl;
}

int main( void )
{

    std::string test[5] = {"test1","test2","test3","test4","test5"};

    iter(test, 5, &print);
}