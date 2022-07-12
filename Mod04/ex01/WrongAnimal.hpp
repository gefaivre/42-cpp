#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal
{

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &p);
	~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &other);

	std::string getType(void) const;

	void makeSound(void) const;



protected:
	std::string type;

};

#endif