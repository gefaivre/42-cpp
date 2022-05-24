#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ){

	std::cout << "PHONEBOOK constructor called" << std::endl;
	this->contactsNbr = 0;
	this->oldestContacts = -1;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "PHONEBOOK destructor called" << std::endl;
}

void PhoneBook::readInfo( void ){
	oldestContacts++;
	std::string line;
	std::cout << "Firstname : ";
	std::getline(std::cin, line);
	this->contacts[contactsNbr].firstName = line;
	this->contacts[contactsNbr].index = oldestContacts;
	contactsNbr++;
}

void PhoneBook::searchContact( void ){
	for (int i = 0; i < this->contactsNbr; i++)
	{
		std::cout << this->contacts[i].index << " | " << this->contacts[i].firstName << std::endl;
	}
}

void PhoneBook::addContact( void ){
	if (contactsNbr < 7)
	{
		readInfo();
	}
	else
	{
		return;
	}
}


