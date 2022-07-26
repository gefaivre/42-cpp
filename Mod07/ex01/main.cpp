#include "iter.hpp"
#include <string>
#include <iostream>

template< typename T>
void print(T  & toPrint)
{
    std::cout << toPrint << std::endl;
}

int main( void )
{

    std::string test_string[5] = {"test1","test2","test3","test4","test5"};
    int test_int[5] = {1,2,3,4,5};

    iter(test_string, 5, &print);

    iter(test_int, 5, &print);
}