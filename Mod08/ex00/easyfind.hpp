#ifndef EASYFIND_HPP
#define EASYFIND_HPP

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

/* template<typename T>
typename T::iterator easyfind(T &tab, const int n)
{
	typename T::iterator	result = find(tab.begin(), tab.end(), n);
	if (result == tab.end())
		return tab.end();
	return result;
}
 */

#endif