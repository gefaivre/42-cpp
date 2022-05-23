#ifndef CLASS_CONTACT_H
#define CLASS_CONTACT_H
#include "PhoneBook.hpp"

class Contact{

	public:
	int getIndex( void );
	
	Contact( int idx );
	Contact( void );
	~Contact( void );


	private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	int index;


};

#endif