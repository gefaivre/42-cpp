#include <string>
#include "PhoneBook.hpp"

void welcom( void ){
	std::cout << "  _____  _                      ____              _    " << std::endl;
	std::cout << " |  __ \\| |                    |  _ \\            | | " << std::endl;
	std::cout << " | |__) | |__   ___  _ __   ___| |_) | ___   ___ | | __" << std::endl;
	std::cout << " |  ___/| '_ \\ / _ \\| '_ \\ / _ \\  _ < / _ \\ / _ \\| |/ /" << std::endl;
	std::cout << " | |    | | | | (_) | | | |  __/ |_) | (_) | (_) |   < " << std::endl;
	std::cout << " |_|    |_| |_|\\___/|_| |_|\\___|____/ \\___/ \\___/|_|\\_\\" << std::endl << std::endl;

}

int main( void ){
	
	PhoneBook phoneBook;
	std::string line;
	welcom();
	while (1)
	{
		std::cout << std::endl << "Command list: " << std::endl;
		std::cout << "ADD    : Add a Contact" << std::endl;
		std::cout << "SEARCH : Search a Contact" << std::endl;
		std::cout << "EXIT   : Exit the progam" << std::endl;

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