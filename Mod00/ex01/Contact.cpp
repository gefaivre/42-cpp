#include "PhoneBook.hpp"

Contact::Contact( void ){
}

Contact::~Contact( void ){
}

std::string	Contact::getFirstname( void ) const {
	return (this->firstName);
}

void		Contact::setFirstname(std::string line){
	this->firstName = line;
}

std::string	Contact::getLastName( void ) const {
	return (this->lastName);
}

void		Contact::setLastName(std::string line){
	this->lastName = line;
}

std::string	Contact::getNickName( void ) const {
	return (this->nickname);
}

void		Contact::setNickName(std::string line){
	this->nickname = line;
}

std::string	Contact::getPhoneNumber( void ) const {
	return (this->phoneNumber);
}

void		Contact::setPhoneNumber(std::string line){
	this->phoneNumber = line;
}

std::string	Contact::getDarckestSecret( void ) const {
	return (this->darkestSecret);
}

void		Contact::setDarckestSecret(std::string line){
	this->darkestSecret = line;
}

int	Contact::getIndex( void ) const {
	return (this->index);
}

void		Contact::setIndex(int index){
	this->index = index;
}