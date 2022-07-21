#include "RobotomyRequestForm.hpp"
#include <iostream>


RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 25, 5)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;

}


RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 25, 5)
{
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
    
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &p)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	*this = p;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{ 
    this->gradeForSign = other.gradeForSign;
    this->gradeForExec = other.gradeForExec;
	this->isSigned = other.isSigned;
	return (*this);
}