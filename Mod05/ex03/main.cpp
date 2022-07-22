#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main(void)
{
    {

        Form *test3 = new ShrubberyCreationForm("Garden");
        try
        {
            Bureaucrat test("roger", 1);
            std::cout << *test3 << std::endl;
            // test.signForm(*test3);
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

    std::cout << "------------------------------------" << std::endl;

    {
        try
        {
            Form *test = NULL;
            Intern titouan;
            test = titouan.makeForm("shruberry creation", "kitchen");
            Bureaucrat hubert("hubert", 50);
            hubert.signForm(*test);
            hubert.executeForm(*test);
        }
        catch (std::exception &e)
        {

            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}