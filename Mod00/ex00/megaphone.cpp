#include <iostream>
#include <cctype>
#include <string.h>
#include <bits/stdc++.h>



int main(int ac, char **av)
{
	(void)ac;
	for (int i = 1; av[i]; i++)
	{
		int n = sizeof(av[i]);
		std::transform(av[i], av[i + n], av[i], ::toupper);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
