#ifndef CAT_HPP
#define CAT_HPP
#include <string>

class Cat
{

public:
	Cat(void);
	Cat(std::string name);
	Cat(const Cat &p);
	~Cat(void);

	Cat &operator=(const Cat &other);

protected:

};

#endif