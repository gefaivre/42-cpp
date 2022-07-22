#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	try
	{
		std::cout << "Garde : 1" << std::endl; 
		Bureaucrat robert("Robert", 1);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;
	try
	{
		std::cout << "Garde : 150" << std::endl; 
		Bureaucrat robert("Robert", 150);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;
	try
	{
		std::cout << "Garde : 0" << std::endl; 
		Bureaucrat robert("Robert", 0);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;
	try
	{
		std::cout << "Garde : 151" << std::endl; 
		Bureaucrat robert("Robert", 151);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;
	try
	{
		std::cout << "Garde : -5" << std::endl; 
		Bureaucrat robert("Robert", -5);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------------" << std::endl;
	try
	{
		std::cout << "Garde : 5" << std::endl; 
		Bureaucrat robert("Robert", 5);
		std::cout << robert << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}