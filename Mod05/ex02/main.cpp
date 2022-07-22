#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main(void)
{
	{
		std::cout << "--------Form not signed :" << std::endl;
		Form *test3 = new ShrubberyCreationForm("Garden");
		try
		{
			Bureaucrat test("roger", 1);
			std::cout << *test3 << std::endl;
			test.executeForm(*test3);
			std::cout << *test3 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test3;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		std::cout << "--------Roger can't sign:" << std::endl;
		Form *test3 = new ShrubberyCreationForm("Garden");
		try
		{
			Bureaucrat test("roger", 150);
			std::cout << *test3 << std::endl;
			test.signForm(*test3);
			test.executeForm(*test3);
			std::cout << *test3 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test3;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		std::cout << "--------Roger can sign but can't exec:" << std::endl;
		Form *test3 = new ShrubberyCreationForm("Garden");
		try
		{
			Bureaucrat test("roger", 144);
			std::cout << *test3 << std::endl;
			test.signForm(*test3);
			test.executeForm(*test3);
			std::cout << *test3 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test3;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		std::cout << "--------Roger sign and exec Shrubberry creation:" << std::endl;
		Form *test3 = new ShrubberyCreationForm("Garden");
		try
		{
			Bureaucrat test("roger", 1);
			std::cout << *test3 << std::endl;
			test.signForm(*test3);
			test.executeForm(*test3);
			std::cout << *test3 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test3;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		std::cout << "--------Roger sign and exec Robotomy request:" << std::endl;
		Form *test3 = new RobotomyRequestForm("phbarrad");
		try
		{
			Bureaucrat test("roger", 1);
			std::cout << *test3 << std::endl;
			test.signForm(*test3);
			test.executeForm(*test3);
			std::cout << *test3 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test3;
	}
	std::cout << "------------------------------------" << std::endl;
	{
		std::cout << "--------Roger sign and exec Presidential pardon:" << std::endl;
		Form *test3 = new PresidentialPardonForm("God");
		try
		{
			Bureaucrat test("roger", 1);
			std::cout << *test3 << std::endl;
			test.signForm(*test3);
			test.executeForm(*test3);
			std::cout << *test3 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test3;
	}

	return (0);
}