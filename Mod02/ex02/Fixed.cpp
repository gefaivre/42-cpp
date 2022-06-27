#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed( void ){
	this->fixed = 0;
}

Fixed::Fixed(const int nbr){
	this->fixed = nbr << this->fract;
	return;
}

Fixed::Fixed(const float nbr){
	this->fixed = roundf(nbr * pow(2, this->fract));
}

Fixed::Fixed(const Fixed &p){
	*this = p;
}

Fixed::~Fixed( void ){
}


Fixed & Fixed::operator=( const Fixed &other ){
	fixed = other.getRawBits();
	return *this;
}

bool Fixed::operator<( const Fixed &other ) const {
	if (this->toFloat() < other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>( const Fixed &other ) const {
	if (this->toFloat() > other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=( const Fixed &other ) const {
	if (this->toFloat() <= other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=( const Fixed &other ) const {
	if (this->toFloat() >= other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator==( const Fixed &other ) const {
	if (this->toFloat() == other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=( const Fixed &other ) const {
	if (this->toFloat() != other.toFloat())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+( const Fixed &other ) const {
	Fixed f;
	f = this->getRawBits() + other.getRawBits();
	return (f);
}

Fixed	Fixed::operator-( const Fixed &other ) const {
	Fixed f;
	f = this->getRawBits() - other.getRawBits();
	return (f);
}

Fixed	Fixed::operator*( const Fixed &other ) const {
	Fixed f;
	f = this->getRawBits() * other.getRawBits();
	return (f);
}

Fixed	Fixed::operator/( const Fixed &other ) const {
	Fixed f;
	f = this->getRawBits() / other.getRawBits();
	return (f);
}

Fixed	&Fixed::operator++( void ){
	this->fixed++;
	return (*this);
}

Fixed	Fixed::operator++( int ){
	Fixed old = *this;
	operator++();
	return old;
}

Fixed	&Fixed::operator--( void ){
	this->fixed--;
	return (*this);
}

Fixed	Fixed::operator--( int ){
	Fixed old = *this;
	operator--();
	return old;
}


Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

int Fixed::getRawBits( void ) const {
	return(this->fixed);
}

void Fixed::setRawBits( int const raw ){
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