#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <algorithm>

int main(void)
{
	{
		std::cout << "***10***" << std::endl;
		std::vector<int> test;
		for (int i = 0; i < 20; i++)
			test.push_back(i);

		std::vector<int>::iterator iter = easyfind(test, 10);
		std::cout << *iter << std::endl;
	}
	{
		std::cout << "***25***" << std::endl;
		std::vector<int> test;
		for (int i = 0; i < 20; i++)
			test.push_back(i);

		std::vector<int>::iterator iter = easyfind(test, 25);
		std::cout << *iter << std::endl;
	}
	{
		std::cout << "***-5***" << std::endl;
		std::vector<int> test;
		for (int i = 0; i < 20; i++)
			test.push_back(i);

		std::vector<int>::iterator iter = easyfind(test, -5);
		std::cout << *iter << std::endl;
	}
	

    return (0);


}