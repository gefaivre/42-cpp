#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>

class Bureaucrat
{
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &p);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);

	std::string getName() const;
	int getGrade() const;

	void upperGrade(int incrementValue);
	void lowerGrade(int descrementValue);

private:
	const std::string name;
	int grade;

	static const int gradeMax = 1;
	static const int gradeMin = 150;

	void checkGrade() const;

	Bureaucrat(void);

public:
	class tooHightExeption : public std::exception
	{
		const char *what() const throw()
		{
			return ("The grade is too Hight");
		}
	};
	class tooLowExeption : public std::exception
	{
		const char *what() const throw()
		{
			return ("The grade is too Low");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &p);

#endif