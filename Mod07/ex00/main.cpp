#include "whatever.hpp"
#include <iostream>

int main(void)
{
	{
		int i = 10;
		int y = 20;

		std::cout << "i = " << i << std::endl;
		std::cout << "y = " << y << std::endl;

		std::cout << "***SWAP***" << std::endl;
		swap(i, y);

		std::cout << "i = " << i << std::endl;
		std::cout << "y = " << y << std::endl;
	}
	std::cout << "******************************" << std::endl;
	{
		int i = 10;
		int y = 20;

		std::cout << "i = " << i << std::endl;
		std::cout << "y = " << y << std::endl;

		std::cout << "***MIN***" << std::endl;
		std::cout << min(i, y) << std::endl;
	}
	std::cout << "******************************" << std::endl;
	{
		int i = 10;
		int y = 20;

		std::cout << "i = " << i << std::endl;
		std::cout << "y = " << y << std::endl;

		std::cout << "***MAX***" << std::endl;
		std::cout << max(i, y) << std::endl;
	}
	std::cout << "******************************" << std::endl;
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;

	return (0);
}