#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"

typedef struct	s_list
{
	std::string	name;
	Form		*type;
}               t_list;

class Intern
{
public:
	Intern( void );
	Intern(const Intern &p);
	~Intern();

	Intern &operator=(const Intern &other);

    Form *makeForm(const std::string &formName, const std::string &target);


};

std::ostream &	operator<<( std::ostream &os, Intern const &p);

#endif