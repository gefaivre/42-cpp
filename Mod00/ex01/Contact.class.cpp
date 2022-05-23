#include <iostream>
#include "Contact.class.hpp"


Contact::Contact( void ){
	std::cout << "CONTACT constructor without index called" << std::endl;
}


Contact::Contact( int idx ){
	this->index = idx;
	std::cout << "CONTACT constructor with index called" << std::endl;
}

Contact::~Contact( void ){
	std::cout << "CONTACT destructor called" << std::endl;
}

int Contact::getIndex( void )
{
	return (this->index);
}