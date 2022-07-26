#include "Convert.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <string>

Convert::Convert()
{
}

Convert::Convert(const char *string) : stringToConvert(string)
{
	if (stringToConvert.length() == 1 && ((stringToConvert[0] >= 37 && stringToConvert[0] <= 47) || (stringToConvert[0] >= 58 && stringToConvert[0] <= 126)))
		_value = static_cast<char>(stringToConvert[0]);
	else
	{
		if (!isSpecial())
		{
			checkString();
			std::stringstream ss;
			ss << stringToConvert;

			if (!(ss >> _value))
			{
				throw Convert::UnknowFormatException();
			}
		}
	}
}

Convert::Convert(const Convert &p)
{
	*this = p;
}

Convert::~Convert()
{
}

Convert &Convert::operator=(const Convert &other)
{
	(void)other;
	return (*this);
}

bool Convert::isSpecial()
{ 
	if (stringToConvert.compare("nan") == 0 || stringToConvert.compare("nanf") == 0 )
	{

		_value = nan("1");
		return (true);
	}
	if ((stringToConvert.compare("inf") == 0 || stringToConvert.compare("inff") == 0)
		|| (stringToConvert.compare("+inf") == 0 || stringToConvert.compare("+inff") == 0))
	{
		_value = std::numeric_limits<double>::infinity();
		return (true);
	}
	if (stringToConvert.compare("-inf") == 0 || stringToConvert.compare("-inff") == 0 )
	{
		_value = -std::numeric_limits<double>::infinity();
		return (true);
	}
	return false;
}

void Convert::checkFCara(unsigned long i)
{
	double tmp;
	std::stringstream ss;
	ss << stringToConvert.substr(0,i);
	ss >> tmp; 
	if (tmp > std::numeric_limits<float>::max() || tmp < std::numeric_limits<float>::min())
		throw Convert::UnknowFormatException();
}


bool Convert::checkString()
{
	unsigned long i = 0;
	bool point = false;
	bool fLetter = false;

	if (stringToConvert.empty()) {throw Convert::UnknowFormatException();}
	if (stringToConvert[i] == '+' || stringToConvert[i] == '-') {i++;}
	while (i < stringToConvert.length() && std::isdigit(stringToConvert[i])) {i++;}
	if (i < stringToConvert.length() && (stringToConvert[i] == '.' || stringToConvert[i] == 'f'))
	{
		if (stringToConvert[i] == '.') {point = true;}
		if (stringToConvert[i] == 'f')
		{
			checkFCara(i);
			fLetter = true;
		}
		i++;
	}
	if (i < stringToConvert.length() && (std::isdigit(stringToConvert[i]) == 0 || (stringToConvert[i] == 'f' && fLetter == false)))
	{
		if (stringToConvert[i] == 'f')
		{
			fLetter = true;
			i++;
		}
		else
			throw Convert::UnknowFormatException();
	}
	while (i < stringToConvert.length() && std::isdigit(stringToConvert[i]) && fLetter == false) {i++;}
	if (i < stringToConvert.length() && fLetter == false && stringToConvert[i] == 'f')
	{
		checkFCara(i);
		i++;
	}
	if (i < stringToConvert.length()) {throw Convert::UnknowFormatException();}
	return (true);
}

bool Convert::toInt() const
{
	if (_value <= 2147483647 && _value >= -21474836478)
	{
		std::cout << static_cast<int>(_value) << std::endl;
		return (1);
	}
	else
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
}

bool Convert::toChar() const
{
	if (_value >= 2147483647 || _value <= -21474836478)
	{
		std::cout << "impossible" << std::endl;
	}
	if (_value <= 126 && _value >= 32)
	{
		std::cout << "'" << static_cast<char>(static_cast<int>(_value)) << "'" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "non displayable" << std::endl;
		return (0);
	}
}

bool Convert::toFloat() const
{

	std::cout  <<static_cast<float>(_value);

	if (_value - static_cast<float>(_value) == 0.0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	return (1);
}

bool Convert::toDouble() const
{
	std::cout << _value ;
	if (_value - round(_value) == 0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
	return (1);
}