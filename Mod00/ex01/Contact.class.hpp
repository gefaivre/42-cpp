#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>
#include <string>

class Contact{

	public:
		Contact( void );
		~Contact( void );

		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		int index;

	private:
		



};

#endif