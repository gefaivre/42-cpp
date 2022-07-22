#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern( void )
{
	std::cout << "Intern Default Constructor called" << std::endl;
}


Intern::Intern(const Intern &p)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = p;

}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor called" << std::endl;

}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
	return (*this);
}


std::ostream &	operator<<( std::ostream &os, Intern const &p)
{
    (void)p;
	os <<  "It's just an Intern";
	return os;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
    Form *ret = NULL;

    t_list form[] = 
    {
        {"presidential pardon", new PresidentialPardonForm(target)},
        {"robotomy request", new RobotomyRequestForm(target)},
        {"shruberry creation", new ShrubberyCreationForm(target)},
        {"", NULL}
    };

    for (int i = 0; form[i].type != NULL; i++)
    {
        if (formName.compare(form[i].name) == 0)
            ret = form[i].type;
        else
            delete form[i].type;
    }

    if (ret != NULL)
    {
        std::cout << "Intern have create the " << formName << std::endl;
        return (ret);
    }
    else
        throw( Form::FormNotExist());

}


