#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"


int main( void ){
	
	PhoneBook phoneBook;
	std::string line;
	while (1)
	{
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			phoneBook.addContact();
		else if (line.compare("SEARCH") == 0)
			phoneBook.searchContact();
		else if (line.compare("EXIT") == 0)
			break;
	}
	return (0);
}