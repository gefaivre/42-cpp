#ifndef CLASS_PHONEBOOK_H
# define CLASS_PHONEBOOK_H
# include "PhoneBook.hpp"
# include "Contact.class.hpp"


class PhoneBook{

	public:

	PhoneBook( void );
	~PhoneBook( void );


	void addContact(void);
	void searchContact(void);

	private:
	Contact contacts[8];
	int contactsSize;


};

#endif