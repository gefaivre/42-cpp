#include "Span.hpp"


int main( void )
{
	{
		try
		{
			Span test(10);

			test.addNumber(10);
			test.addNumber(25);
			test.addNumber(100);
			test.addNumber(02);
			test.addNumber(15);
			test.addNumber(9);
			test.addNumber(64);
			test.addNumber(8);
			test.addNumber(98);
			test.addNumber(75);

			std::cout << test << std::endl;
			std::cout << "Shortest " << test.shortestSpan() << std::endl;
			std::cout << "Longest " <<  test.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "**************************" << std::endl << std::endl;
	{
		try
		{
			Span test(1002);
			std::vector<int> salut(1000);
			std::srand(unsigned(std::time(0)));
			std::generate(salut.begin(), salut.end(), std::rand );

			test.addNumber(10);
			test.addNumber(25);

			test.addByRange(salut.begin(), salut.end());

			std::cout << test << std::endl;
			std::cout << "Shortest " << test.shortestSpan() << std::endl;
			std::cout << "Longest " <<  test.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "**************************" << std::endl << std::endl;
	{
		try
		{
			Span test(50);
			std::vector<int> salut(100);
			std::srand(unsigned(std::time(0)));
			std::generate(salut.begin(), salut.end(), std::rand );

			test.addByRange(salut.begin(), salut.end());

			std::cout << test << std::endl;
			std::cout << "Shortest " << test.shortestSpan() << std::endl;
			std::cout << "Longest " <<  test.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "**************************" << std::endl << std::endl;
	{
		try
		{
			Span test(20000);
			std::vector<int> salut(10000);
			std::vector<int> salut2(10000);
			std::srand(unsigned(std::time(0)));
			std::generate(salut.begin(), salut.end(), std::rand );
			std::generate(salut2.begin(), salut2.end(), std::rand );

			test.addByRange(salut.begin(), salut.end());
			test.addByRange(salut2.begin(), salut2.end());

			/* std::cout << test << std::endl; */
			std::cout << "Shortest " << test.shortestSpan() << std::endl;
			std::cout << "Longest " <<  test.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "**************************" << std::endl << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return 0;
	}


	return (0);
}