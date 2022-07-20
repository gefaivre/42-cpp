#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>


class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &p);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);

	std::string getName();
	int getGrade()



private:

	const std::string	name;
	int			grade;


};

#endif