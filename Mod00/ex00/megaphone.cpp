#include <iostream>
#include <bits/stdc++.h>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
		return (0);
	}
	for (int i = 1; av[i]; i++)
	{
		int n = sizeof(av[i]);
		std::transform(av[i], av[i + n], av[i], ::toupper);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
