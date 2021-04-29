#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bubba;
	try
	{
		bubba = new Bureaucrat("Bubba", -100);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		bubba = new Bureaucrat("Bubba", 1);
		bubba->increment();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;

		std::cout << "Exception handling:  ";
		std::cout << *bubba << "  |  ";
		bubba->decrement();
		std::cout << *bubba << std::endl;
	}

	std::cout << std::endl;

	try
	{
		delete bubba;
		bubba = new Bureaucrat("Bubba", 150);
		bubba->decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;

		std::cout << "Exception handling:  ";
		std::cout << *bubba << "  |  ";
		bubba->increment();
		std::cout << *bubba << std::endl;
	}

	std::cout << std::endl;

	for (int i = 1; i <= 10; i++)
	{
		bubba->increment();
		std::cout << *bubba << std::endl;
	}
	return 0;
}
