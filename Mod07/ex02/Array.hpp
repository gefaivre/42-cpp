#ifndef ARRAY_HPP
#define ARRAY_HPP

template< typename T >
class Array
{
public:
    Array()
    {
        std::cout << "Void Array Constructor" << std::endl;
        _size = 0;
        _tab = NULL;
    }
    Array( unsigned int n): _tab(new T[n]()), _size(n)
    {
        std::cout << "Array[n] Constructor" << std::endl;
    }
    Array(const Array &p)
    {
        std::cout << "Copy Array Called" << std::endl;
        *this = p;
    }
    ~Array()
    {
        delete [] _tab;
    }
    T &operator[](const unsigned int index) const
	{
		if (index >= _size || index < 0)
			throw std::overflow_error("Bad index");
		return this->_tab[index];
	}
	Array<T> &operator=(const Array<T> &other)
    {
		_size = other._size;
		_tab = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_tab[i] = other[i];
		return *this;
    }
    unsigned int getSize() const
    {
        return (_size);
    }

private:
    T * _tab;
    unsigned int _size;
};

#endif