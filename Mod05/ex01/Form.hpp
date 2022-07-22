#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form
{
public:
	Form(const std::string name, int gradeForSign, int gradeForExec);
	Form(const Form &p);
	~Form();

	Form &operator=(const Form &other);

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	bool getSignature() const;

	bool beSigned(const Bureaucrat &b);

private:
	const std::string name;
	bool isSigned;

	int gradeForSign;
	int gradeForExec;

	static const int gradeMax = 1;
	static const int gradeMin = 150;

	void checkGrade() const;

	Form(void);

public:
	class tooHightExeption : public std::exception
	{
		const char *what() const throw()
		{
			return ("A Form grade is too Hight");
		}
	};
	class tooLowExeption : public std::exception
	{
		const char *what() const throw()
		{
			return ("A Form grade is too Low");
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return ("The Bureaucrat grade is too low to sign the Form");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Form const &p);

#endif