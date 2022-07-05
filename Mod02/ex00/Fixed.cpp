#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &p)
{
	std::cout << "Copy constructeur called" << std::endl;
	*this = p;
}

Fixed & Fixed::operator=( const Fixed &ref )
{
	fixed = ref.getRawBits();
    return *this;
}
	
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}