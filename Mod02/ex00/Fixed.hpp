#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{

public:
	Fixed( void );
	~Fixed( void );
	Fixed(const Fixed &p);

	Fixed&operator=( const Fixed &other );
	
	int getRawBits( void ) const ;
	void setRawBits( int const raw );

private:
	int fixed;
	const static int fract = 8; 

};




#endif