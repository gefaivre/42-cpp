#ifndef ITER_HPP
#define ITER_HPP

template<typename T>

void iter(T *tab, int const & size, void (*functionToUse)( T &))
{
    for (int i = 0; i < size; i++)
        functionToUse(tab[i]);
}

#endif