#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>


class Bureaucrat;

class Form
{
public:
	Form(const std::string  name, int gradeForSign, int gradeForExec);
	Form(const Form &p);
	virtual ~Form();

	virtual Form &operator=(const Form &other);

	std::string getName() const ;
	int getGradeToSign() const ;
	int getGradeToExec() const ;
	bool getSignature() const ;

	bool beSigned( const Bureaucrat &b);


	bool execute(Bureaucrat const & executor) const;
	virtual void FormFunction() const = 0;

protected:

	const std::string	name;
    bool isSigned;

	int gradeForSign;
	int gradeForExec;

	std::string target;

	static const int gradeMax = 1;
	static const int gradeMin = 150;

	void checkGrade() const;

	Form( void );

public:

	class tooHightExeption : public std::exception
	{
		const char * what() const throw()
		{
			return ("A Form grade is too Hight");
		}
	};
	class tooLowExeption : public std::exception
	{
		const char *  what() const throw()
		{
			return ("A Form grade is too Low");
		}
	};
    class GradeTooLowException : public std::exception
	{
		const char *  what() const throw()
		{
			return ("The Bureaucrat grade is too low to sign the Form");
		}
	};
	class GradeTooLowToExecException : public std::exception
	{
		const char *  what() const throw()
		{
			return ("The Bureaucrat grade is too low to execute the Form");
		}
	};
	class FormNotSignedException : public std::exception
	{
		const char *  what() const throw()
		{
			return ("The Bureaucrat Can't execute the form because the Form is not signed");
		}
	};
	class FormNotExist : public std::exception
	{
		const char *  what() const throw()
		{
			return ("The Intern is so useful, he literally create a black holl");
		}
	};

};

std::ostream	&operator<<( std::ostream &os, const Form &p);

#endif