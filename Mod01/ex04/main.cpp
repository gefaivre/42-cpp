#include <iostream>
#include <string>
#include <iterator>
#include <stdlib.h>
#include <fstream>

bool error(std::string error)
{
	std::cout << error << std::endl;
	return(1);
}

bool check(std::string fileName, std::string stringToReplace, std::string remplacingString)
{
	std::ifstream myfile;

	if (fileName.length() == 0 || stringToReplace.length() == 0 || remplacingString.length() == 0)
		return(error("Argument can't be empty"));
	myfile.open( fileName.c_str() );
	if (myfile.fail())
		return(error("file can't be open"));
	myfile.close();
	return (false);
}


std::string modifyString(std::string string, std::string stringToReplace, std::string remplacingString)
{
	std::string rString;
	rString = string;
	for (size_t i = 0; i < rString.length(); i++)
	{
		if (rString.compare(i, stringToReplace.length(), stringToReplace.c_str()) == 0)
		{
			rString.erase(i, stringToReplace.length());
			rString.insert(i, remplacingString);
			i += remplacingString.length();
		}
	}
	return (rString);
}

int main(int ac, char *av[])
{
	std::ifstream myfile;
	std::string outfilename;

	if (ac != 4)
		return(error( "Usage : ./replace [fileName] [stringToReplace] [remplaceingString]" ));
	if (check(av[1], av[2], av[3]) == 1)
		return (1);
	outfilename = av[1];
	outfilename += ".replace"; 
	myfile.open ( av[1] );
	std::ofstream out_file(outfilename.c_str());
	std::string mystring;
	while ( myfile.good() )
	{
		std::getline (myfile, mystring);
		out_file << modifyString(mystring, av[2], av[3]) << std::endl;
	}
	myfile.close();
	return 0;
}
