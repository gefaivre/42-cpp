#include <iostream>
#include <string>
#include <stdlib.h>

void ft_getline( std::string *line )
{
	std::getline(std::cin, *line);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		exit(1);
	}
	else if (line->empty())
	{
		std::cout << "Please enter a value:" << std::endl;
		ft_getline( line );
	}
}