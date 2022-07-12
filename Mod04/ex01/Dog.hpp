#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog(void);
	Dog(const Dog &p);
	~Dog(void);

	Dog &operator=(const Dog &other);

	void makeSound() const;

protected:

};

#endif