#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"


Contact::Contact( void ){
	std::cout << "CONTACT constructor without index called" << std::endl;
}


Contact::~Contact( void ){
	std::cout << "CONTACT destructor called" << std::endl;
}
