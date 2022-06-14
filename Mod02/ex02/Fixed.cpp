#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr){
	std::cout << "Int constructeur colled" << std::endl;
	this->fixed = nbr << this->fract;
}

Fixed::Fixed(const float nbr){
	std::cout << "float constructeur colled" << std::endl;
	(void)nbr;
	/* this->fixed = nbr << this->fract; */
}

Fixed::Fixed(const Fixed &p){
	std::cout << "Copy constructeur colled" << std::endl;
	*this = p;
}

Fixed::~Fixed( void ){
	std::cout << "Default destructor called" << std::endl;
}


Fixed & Fixed::operator=( const Fixed &other ){
	std::cout << "Copy assignment operator called" << std::endl;
	fixed = other.getRawBits();
    return *this;
}
	
int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	(void)raw;
}