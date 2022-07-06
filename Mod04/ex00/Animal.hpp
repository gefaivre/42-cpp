#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{

public:
	Animal(void);
	Animal(std::string name);
	Animal(const Animal &p);
	~Animal(void);

	Animal &operator=(const Animal &other);

protected:
	std::string type;

};

#endif