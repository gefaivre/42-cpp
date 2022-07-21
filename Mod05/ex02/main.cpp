#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main( void )
{
    try
    {
        Form * test3 = new ShrubberyCreationForm("God");
        Bureaucrat test("roger", 1);
        std::cout << *test3 << std::endl;
        //test.signForm(*test3);
        test.executeForm(*test3);
        std::cout << *test3 << std::endl;

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;       
    }

    return (0);
}