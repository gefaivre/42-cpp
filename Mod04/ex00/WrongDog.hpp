#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{

public:
	WrongDog(void);
	WrongDog(const WrongDog &p);
	~WrongDog(void);

	WrongDog &operator=(const WrongDog &other);

	void makeSound() const;

protected:

};

#endif