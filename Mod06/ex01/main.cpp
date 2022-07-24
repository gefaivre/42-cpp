#include "Convert.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage : ./Convert [string]" << std::endl;
        return (1);
    }
    try
    {
        Convert conv(av[1]);
        std::cout << std::setw(7) << "Char "<< ": ";
        conv.toChar();
        std::cout << std::setw(7)  << "int " << ": ";
        conv.toInt();
        std::cout << std::setw(7)  << "float " << ": ";
        conv.toFloat();
        std::cout << std::setw(7)  << "double " << ": ";
        conv.toDouble();
    }
    catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    return (0);
}