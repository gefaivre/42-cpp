#ifndef FIXED_HPP
#define FIXED_HPP
#include <ostream>

class Fixed
{

private:
	int fixed;
	const static int fract = 8;

public:
	Fixed( void );
	Fixed(const Fixed &p);
	Fixed( const int nbr);
	Fixed( const float nbr);
	~Fixed( void );
	
	Fixed&operator=( const Fixed &other );
	
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const ;
	void setRawBits( int const raw );

};

std::ostream &operator<<( std::ostream &os, const Fixed &other );

#endif