#include "Data.hpp"
#include <iostream>

#include <stdint.h>

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

int main( void )
{
 
	Data		*data= new Data;
	Data		*new_data;
	uintptr_t	raw;

    std::cout << "Original :" << std::endl;
    std::cout << "String : I'm a string" << std::endl;
    std::cout << "Number : 42" << std::endl << std::endl;

	data->string = "I'm a string";
	data->number = 42;


    std::cout << "**Serialize/Deserialize***" << std::endl << std::endl;

	raw = serialize(data);
	new_data = deserialize(raw);

    std::cout << "New_data :" << std::endl;
	std::cout << "String :" << new_data->string << std::endl;
	std::cout << "Number :" << new_data->number << std::endl;

    return (0);
}