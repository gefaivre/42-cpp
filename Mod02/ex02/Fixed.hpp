#ifndef FIXED_HPP
#define FIXED_HPP
class Fixed{

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

private:
	int fixed;
	const static int fract = 8; 

};




#endif