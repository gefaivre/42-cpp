#ifndef FIXED_HPP
#define FIXED_HPP
#include <ostream>

class Fixed{

public:
	Fixed( void );
	Fixed(const Fixed &p);
	Fixed( const int nbr);
	Fixed( const float nbr);
	~Fixed( void );
	
	Fixed	&operator=( const Fixed &other );
	bool	operator<( const Fixed &other ) const ;
	bool	operator>( const Fixed &other ) const ;
	bool	operator<=( const Fixed &other ) const ;
	bool	operator>=( const Fixed &other ) const ;
	bool	operator==( const Fixed &other ) const ;
	bool	operator!=( const Fixed &other ) const ;

	Fixed	operator+( const Fixed &other ) const ;
	Fixed	operator-( const Fixed &other ) const ;
	Fixed	operator*( const Fixed &other ) const ;
	Fixed	operator/( const Fixed &other ) const ;

	Fixed &operator++( void );
	Fixed operator++( int );
	Fixed &operator--( void );
	Fixed operator--( int );

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const ;
	void setRawBits( int const raw );

private:
	int fixed;
	const static int fract = 8; 

};

std::ostream &operator<<( std::ostream &os, const Fixed &other );


#endif