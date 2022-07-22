#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(void) : name(""), gradeForSign(1), gradeForExec(1)
{
	std::cout << "Form Default Constructor called" << std::endl;
	isSigned = false;
	checkGrade();
}

Form::Form(const std::string name, int gradeForSign, int gradeForExec) : name(name), gradeForSign(gradeForSign), gradeForExec(gradeForExec)
{
	std::cout << "Form name and gsrades Constructor called" << std::endl;
	isSigned = false;
	checkGrade();
}

Form::Form(const Form &p)
{
	std::cout << "Form Copy Constructor called" << std::endl;
	*this = p;
}

Form::~Form()
{
	std::cout << "Form Default Destructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	this->gradeForSign = other.gradeForSign;
	this->gradeForExec = other.gradeForExec;
	this->isSigned = other.isSigned;
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeToSign() const
{
	return (this->gradeForSign);
}

int Form::getGradeToExec() const
{
	return (this->gradeForExec);
}

bool Form::getSignature() const
{
	return (isSigned);
}

bool Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->gradeForSign)
	{
		this->isSigned = true;
		return true;
	}
	else
	{
		throw Form::GradeTooLowException();
		return false;
	}
}

void Form::checkGrade() const
{
	if (this->gradeForExec < this->gradeMax || this->gradeForSign < this->gradeMax)
		throw Form::tooHightExeption();
	if (this->gradeForExec > this->gradeMin || this->gradeForSign > this->gradeMin)
		throw Form::tooLowExeption();
}

bool Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->gradeForExec)
		throw Form::GradeTooLowToExecException();
	else if (!this->isSigned)
		throw Form::FormNotSignedException();
	else
	{
		std::cout << executor.getName() << " Executed " << this->name << std::endl;
		FormFunction();
		return true;
	}
	return false;
}

std::ostream &operator<<(std::ostream &os, Form const &p)
{
	os << "Form " << p.getName() << ": Exec " << p.getGradeToExec() << ", Sign " << p.getGradeToSign() << ((p.getSignature()) ? "." : ". Not") << " Signed.";
	return os;
}
