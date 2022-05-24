#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include "Contact.hpp"


class PhoneBook{

	public:

		PhoneBook( void );
		~PhoneBook( void );

		void addContact(void);
		void searchContact(void);

	private:
		Contact contacts[8];
		void printInfo( std::string info );
		void printContact(int index);
		int contactsNbr;
		int oldestContacts;
		


};

#endif