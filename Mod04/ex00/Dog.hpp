#ifndef DOG_HPP
#define DOG_HPP
#include <string>

class Dog
{

public:
	Dog(void);
	Dog(std::string name);
	Dog(const Dog &p);
	~Dog(void);

	Dog &operator=(const Dog &other);

protected:
	std::string type;

};

#endif