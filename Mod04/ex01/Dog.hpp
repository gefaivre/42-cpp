#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	Dog(void);
	Dog(const Dog &p);
	~Dog(void);

	Dog &operator=(const Dog &other);

	void makeSound() const;

	void setBrain(std::string string, int nb);
	std::string getBrain( int nb ) const ;


protected:

	Brain *brain;

};

#endif