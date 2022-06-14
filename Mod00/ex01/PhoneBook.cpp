#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){
	this->contactsNbr = 0;
	this->oldestContacts = -1;
}

PhoneBook::~PhoneBook( void ){
}

void PhoneBook::printInfo( std::string info ){

	if (info.size() > 9)
		std::cout << info.substr(0, 9) << ".";
	else
	{
		for (int y = 0; y + info.size() < 10; y++)
			std::cout << " ";
		std::cout << info;
	}
}

void PhoneBook::printContact(int index)
{
	std::cout << "Firstname      : " << this->contacts[index].firstName << std::endl;
	std::cout << "Lastname       : " << this->contacts[index].lastName << std::endl;
	std::cout << "Nickname       : " << this->contacts[index].nickname << std::endl;
	std::cout << "Phonenumber    : " << this->contacts[index].phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->contacts[index].darkestSecret << std::endl;
}

void PhoneBook::searchContact( void ){
	std::string cinIndex;
	for (int i = 0; i < this->contactsNbr; i++)
	{
		std::cout << this->contacts[i].index << "|";
		PhoneBook::printInfo(this->contacts[i].firstName);
		std::cout << "|";
		PhoneBook::printInfo(this->contacts[i].lastName);
		std::cout << "|";
		PhoneBook::printInfo(this->contacts[i].nickname);
		std::cout << "|";
		PhoneBook::printInfo(this->contacts[i].phoneNumber);
		std::cout << "|";
		PhoneBook::printInfo(this->contacts[i].darkestSecret);
		std::cout << std::endl;
	}
	while (1)
	{
		std::cout << "Enter an index:" << std::endl;
		std::getline(std::cin, cinIndex);
		std::istringstream ssCinIndex(cinIndex);
		int intCinIndex;
		ssCinIndex >> intCinIndex;
		if (intCinIndex >= 0 && intCinIndex < contactsNbr && !ssCinIndex.fail() )
		{
			PhoneBook::printContact(intCinIndex);
			break;
		}
		else
			std::cout << "Bad index, retry :" << std::endl;
	}
}

void PhoneBook::addContact( void ){
	int index = 0;
	oldestContacts++;
	if (contactsNbr < 8)
		index = contactsNbr;
	else
		index = oldestContacts % 8;
	
	std::string line;
	std::cout << "Firstname : ";
	std::getline(std::cin, line);
	this->contacts[index].firstName = line;
	std::cout << "LastName : ";
	std::getline(std::cin, line);
	this->contacts[index].lastName = line;
	std::cout << "Nickname : ";
	std::getline(std::cin, line);
	this->contacts[index].nickname = line;
	std::cout << "PhoneNumber : ";
	std::getline(std::cin, line);
	this->contacts[index].phoneNumber = line;
	std::cout << "DarkestSecret : ";
	std::getline(std::cin, line);
	this->contacts[index].darkestSecret = line;

	this->contacts[index].index = oldestContacts % 8;
	if (contactsNbr < 8)
		contactsNbr++;
	std::cout << std::endl << "Contact setup" << std::endl;
}
