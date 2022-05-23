#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ){

	std::cout << "PHONEBOOK constructor called" << std::endl;
	contactsSize = 0;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "PHONEBOOK destructor called" << std::endl;
}


