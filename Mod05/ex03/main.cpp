#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main(void)
{

    Form *test = NULL;
    {
        std::cout << "---------Intern create a Form" << std::endl;
        Intern titouan;
        test = titouan.makeForm("shruberry creation", "kitchen");
        try
        {
            Bureaucrat hubert("hubert", 50);
            hubert.signForm(*test);
            hubert.executeForm(*test);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        delete test;
    }
    std::cout << "------------------------------------" << std::endl;
    {
        std::cout << "----------sIntern failed Form" << std::endl;
        Form *test = NULL;
        try
        {
            Intern titouan;
            test = titouan.makeForm("shrubsdfgerry creation", "kitchen");
            Bureaucrat hubert("hubert", 50);
            hubert.signForm(*test);
            hubert.executeForm(*test);
            delete test;
        }
        catch (std::exception &e)
        {
            delete test;
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}