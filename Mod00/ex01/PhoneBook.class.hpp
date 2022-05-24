#ifndef PHONEBOOK_CLASS__H
# define PHONEBOOK_CLASS__H
#include <iostream>
#include <string>
#include "Contact.class.hpp"


class PhoneBook{

	public:

		PhoneBook( void );
		~PhoneBook( void );

		void addContact(void);
		void searchContact(void);

	private:
		Contact contacts[8];
		void readInfo( void );
		int contactsNbr;
		int oldestContacts;
		


};

#endif