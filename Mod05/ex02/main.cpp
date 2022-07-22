#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main( void )
{
   {

        Form *test3 = new ShrubberyCreationForm("Garden");
        try
        {
            Bureaucrat test("roger", 1);
            std::cout << *test3 << std::endl;
            //test.signForm(*test3);
            test.executeForm(*test3);
            std::cout << *test3 << std::endl;
            delete test3;
        }
        catch (std::exception &e)
        {

            delete test3;
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}