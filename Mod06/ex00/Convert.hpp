#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>

class Convert
{
public:
    Convert(const char * string);
    Convert(const Convert & p);
    ~Convert();

    Convert &operator=(const Convert &other);

    bool toInt() const ;
    bool toChar() const ;
    bool toFloat() const ;
    bool toDouble() const ;

private:
    Convert();
    double stringToDouble();
    bool checkString();
    bool isSpecial();
    void checkFCara(unsigned long i);

    double _value;
    const std::string stringToConvert;

public:
	class UnknowFormatException : public std::exception
	{
		const char *what() const throw()
		{
			return ("The enter format value is unknow");
		}
	};

};

#endif