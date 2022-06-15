#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "ft_getline.hpp"

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
	if (contactsNbr == 0){
		std::cout << std::endl << "No contact, please add one" << std::endl;
		return;
	}

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
		ft_getline(&cinIndex);
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
	std::string line;
	oldestContacts++;
	if (contactsNbr < 8)
		index = contactsNbr;
	else
		index = oldestContacts % 8;
	
	std::cout << "Firstname : ";
	ft_getline(&line);
	this->contacts[index].firstName = line;
	std::cout << "LastName : ";
	ft_getline(&line);
	this->contacts[index].lastName = line;
	std::cout << "Nickname : ";
	ft_getline(&line);
	this->contacts[index].nickname = line;
	std::cout << "PhoneNumber : ";
	ft_getline(&line);
	this->contacts[index].phoneNumber = line;
	std::cout << "DarkestSecret : ";
	ft_getline(&line);
	this->contacts[index].darkestSecret = line;

	this->contacts[index].index = oldestContacts % 8;
	if (contactsNbr < 8)
		contactsNbr++;
	std::cout << std::endl << "Contact setup" << std::endl;
}
