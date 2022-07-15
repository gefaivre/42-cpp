#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{

public:
	Brain( void );
	Brain( const Brain &p );
	~Brain( void );

	Brain &operator=( const Brain &other);

	std::string ideas[100];

private:

};

#endif