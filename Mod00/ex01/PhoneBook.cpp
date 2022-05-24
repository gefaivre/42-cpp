#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

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

	std::cout << "LastName : ";
	std::getline(std::cin, line);
	this->contacts[contactsNbr].lastName = line;
	
	std::cout << "Nickname : ";
	std::getline(std::cin, line);
	this->contacts[contactsNbr].nickname = line;

	std::cout << "PhoneNumber : ";
	std::getline(std::cin, line);
	this->contacts[contactsNbr].phoneNumber = line;

	std::cout << "DarkestSecret : ";
	std::getline(std::cin, line);
	this->contacts[contactsNbr].darkestSecret = line;


	this->contacts[contactsNbr].index = oldestContacts;
	contactsNbr++;

	std::cout << "Contact setup" << std::endl;
}

void PhoneBook::searchContact( void ){
	for (int i = 0; i < this->contactsNbr; i++)
	{
		std::cout << this->contacts[i].index << " | ";
		std::cout << this->contacts[i].firstName << " | ";
		std::cout << this->contacts[i].lastName << " | ";
		std::cout << this->contacts[i].nickname << " | ";
		std::cout << this->contacts[i].phoneNumber << " | ";
		std::cout << this->contacts[i].darkestSecret << std::endl;
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


