#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){

	std::cout << "PHONEBOOK constructor called" << std::endl;
	contactsSize = 0;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "PHONEBOOK destructor called" << std::endl;
}



void PhoneBook::addContact( void ){

	std::cout << "Size = " << contactsSize << std::endl;
	
	Contact contact(contactsSize);
	this->contacts[contactsSize] = contact;
	contactsSize++;
}
