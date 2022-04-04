#include "test.hpp"
#include <iostream>

int main(){
	Test coucou;

	coucou.foo = 42;

	std::cout << "coucou.foo" << std::endl;

	coucou.bar();



}