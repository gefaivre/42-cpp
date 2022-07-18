#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{

public:
	virtual ~Animal(void);

	Animal &operator=(const Animal &other);

	std::string getType(void) const;
	virtual void makeSound(void) const;

protected:
	std::string type;
	Animal(void);
	Animal(const Animal &p);

private:

};

#endif