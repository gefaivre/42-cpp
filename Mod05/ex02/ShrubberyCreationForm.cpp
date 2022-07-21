#include "ShrubberyCreationForm.hpp"
#include <iostream>


ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 25, 5)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;

}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 25, 5)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
    
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = p;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{ 
    this->gradeForSign = other.gradeForSign;
    this->gradeForExec = other.gradeForExec;
	this->isSigned = other.isSigned;
	return (*this);
}