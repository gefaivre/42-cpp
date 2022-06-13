#ifndef FIXED_HPP
#define FIXED_HPP
class Fixed{

public:
	Fixed( void );
	~Fixed( void );
	Fixed(const Fixed &p);
	Fixed&operator=( const Fixed &other );
	
	int getRawBits( void );
	void setRawBits( int const raw );

private:
	int fixed;
	const static int fract; 

};




#endif