#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *bubba = new Bureaucrat("Bubba", 75);
	Form *form;
	try
	{
		form = new Form("form", 163, 163);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form = new Form("form", 13, -163);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	form = new Form("form", 74, 63);
	std::cout << *bubba << std::endl;
	std::cout << *form << std::endl << std::endl;

	bubba->signForm(*form);

	std::cout << std::endl << "* promotion *" << std::endl;
	bubba->increment();
	std::cout << *bubba << std::endl << std::endl;

	bubba->signForm(*form);
	std::cout << *form << std::endl;
	return 0;
}
