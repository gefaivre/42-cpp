#include <iostream>
#include "test.hpp"

Test::Test( void ){
	std::cout << "constructor called" << std::endl;
}

Test::~Test( void ){
	std::cout << "destructor called" << std::endl;
}

void	Test::bar( void ){
	std::cout << "bar bar" << std::endl;
}