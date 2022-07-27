#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <stdlib.h>

template <typename T>
typename T::iterator easyfind(T &tab, const int n)
{
	for (typename T::iterator it = tab.begin(); it != tab.end(); it++)
	{
		if (*it == n)
			return (it);
	}
	return (tab.end());

}


#endif