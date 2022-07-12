#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat(void);
	Cat(const Cat &p);
	~Cat(void);

	Cat &operator=(const Cat &other);

	void makeSound() const;

protected:

};

#endif