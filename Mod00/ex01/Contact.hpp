#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>

class Contact{

	public:
		Contact( void );
		~Contact( void );

		std::string	getFirstname( void ) const ;
		void		setFirstname(std::string line);
		std::string	getLastName( void ) const ;
		void		setLastName(std::string line);
		std::string	getNickName( void ) const ;
		void		setNickName(std::string line);
		std::string	getPhoneNumber( void ) const ;
		void		setPhoneNumber(std::string line);
		std::string	getDarckestSecret( void ) const ;
		void		setDarckestSecret(std::string line);
		int			getIndex( void ) const ;
		void		setIndex(int index);

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
		int index;
};

#endif