#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <stdexcept>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <ctime>

class Span
{
public:
	Span(unsigned int nb): _N(nb){}
	Span(const Span &p) {*this = p;}
	~Span(){}

	Span &operator=(const Span &other)
	{
		this->_N = other.getN();
		this->_tab = other.getTab();
		return (*this);
	}
	void addNumber(int nb)
	{
		if (_tab.size() < _N)
			_tab.push_back(nb);
		else
			throw Span::ContainerIsFull();
	}
	int longestSpan( void )
	{
		if (_tab.size() < 2)
			throw Span::StoredNumberIsMinusThanTwo();
		return ( *max_element(_tab.begin(), _tab.end()) - *min_element(_tab.begin(), _tab.end()));
	}

	int	shortestSpan( void )
	{
		int	result = INT_MAX;
		std::vector<int> tmp = _tab;
		if (_tab.size() < 2)
			throw Span::StoredNumberIsMinusThanTwo();
		sort(tmp.begin(), tmp.end());
		if (_tab.size() == 2)
			return ( *max_element(_tab.begin(), _tab.end()) - *min_element(_tab.begin(), _tab.end()));
		for (std::vector<int>::iterator it = tmp.begin(); it != (tmp.end() - 1); it++)
		{
			if ((*(it + 1) - *it) < result)
				result = *(it + 1) - *it;
		}
		return result;
	}



	void addByRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
	{
		std::vector<int> tmp(begin, end);
		if (tmp.size() > _N - _tab.size())
			throw Span::SpanIsTooSmall();
		std::srand(unsigned(std::time(0)));
		std::generate(tmp.begin(), tmp.end(), std::rand);
		_tab.insert( _tab.end(), tmp.begin(), tmp.end() );
	}



	int	getN( void ) const {return (this->_N);}
	std::vector<int>	getTab( void ) const {return (this->_tab);}


private:
    Span():_N(0){}
    unsigned int _N;
    std::vector<int> _tab;


public:
	class ContainerIsFull : public std::exception
	{
		const char *what() const throw()
		{
			return ("Container is full");
		}
	};
	class StoredNumberIsMinusThanTwo : public std::exception
	{
		const char *what() const throw()
		{
			return ("Not enough numbers stored");
		}
	};
	class SpanIsTooSmall : public std::exception
	{
		const char *what() const throw()
		{
			return ("Span is too small");
		}
	};
    
};

std::ostream &operator<<(std::ostream &os, Span const &p)
{
	std::vector<int> tab = p.getTab();

	os << "Size = " << p.getN()  << std::endl;
	for (std::vector<int>::iterator it = tab.begin(); it != tab.end(); it++)
	{
		os << *it << "  ";
	}
	os << "END";
	return os;
}

#endif