#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>


class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(cont Bureaucrat &p);
	~Bureaucrat();


private:

	const std::string	name;
	int			grade;


};

#endif