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
	Span(unsigned int nb);
	Span(const Span &p);
	~Span();

	Span &operator=(const Span &other);

	void addNumber(int nb);

	int longestSpan( void );

	int	shortestSpan( void );

	void addByRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	int	getN( void ) const  ;
	std::vector<int>	getTab( void ) const ;

private:
    Span();
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

std::ostream &operator<<(std::ostream &os, Span const &p);

#endif