#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Constructor called" << std::endl;

	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	*this = p;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->gradeForSign = other.gradeForSign;
	this->gradeForExec = other.gradeForExec;
	this->isSigned = other.isSigned;
	return (*this);
}

void PresidentialPardonForm::FormFunction() const
{
	std::cout << this->target << " Plsssssssss Pardon meeeeee (′ꈍᴗꈍ‵)" << std::endl;
}
