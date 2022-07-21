#include "RobotomyRequestForm.hpp"
#include <time.h>
#include <stdlib.h>
#include <iostream>


RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;

}


RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45)
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

void RobotomyRequestForm::FormFunction() const
{
	int randomiser;
	srand(time(NULL));
	randomiser = rand() % 2;
	std::cout << "***RobotomyRequestForm***" << std::endl;
	std::cout << this->target << " has " << (randomiser ? "" : "not ") << "been robotomised" << std::endl;
	std::cout << "*************************" << std::endl;
}