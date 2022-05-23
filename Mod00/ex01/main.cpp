#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"


int main( void ){
	
	PhoneBook phoneBook;
	std::string test;

	while (1)
	{
		std::getline(std::cin, test);
		if (test.compare("SEARCH") == 0)
		{
			std::cout << "coucou" << std::endl;
		}
		else if (test.compare("ADD") == 0)
		{
			std::cout << "bien vu tu add" << std::endl;
		}
		else if (test.compare("EXIT") == 0)
		{
			std::cout << "Exit" << std::endl;
			break;
		}
	}
	return (0);
}