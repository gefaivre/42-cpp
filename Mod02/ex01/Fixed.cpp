#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}

Fixed::Fixed(const int nbr){
	std::cout << "Int constructeur called" << std::endl;
	this->fixed = nbr << this->fract;
	return;
}

Fixed::Fixed(const float nbr){
	std::cout << "float constructeur called" << std::endl;
	this->fixed = roundf(nbr * pow(2, this->fract));
}

Fixed::Fixed(const Fixed &p){
	std::cout << "Copy constructeur called" << std::endl;
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
	
int Fixed::getRawBits( void ) const {
	return(this->fixed);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

int Fixed::toInt( void ) const {
	return(roundf(this->fixed / pow(2, this->fract)));
}

float Fixed::toFloat( void ) const {
	return((double)this->fixed / pow(2, this->fract));
}

std::ostream	&operator<<( std::ostream &os, const Fixed &other ){
	os << other.toFloat();
	return (os);
}
