#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed( void ){
	std::cout << "Default destructor called" << std::endl;
}


Fixed::Fixed(const Fixed &p){
	std::cout << "Default constructor called" << std::endl;
	*this = p;
}
Fixed & Fixed::operator=( const Fixed &other ){
	std::cout << "Copy assignment operator called" << std::endl;

	fixed = other.fixed;

    return *this;
}
	
int Fixed::getRawBits( void ){
	return(this->fixed);
}

void Fixed::setRawBits( int const raw ){
	(void)raw;
}