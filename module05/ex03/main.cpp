#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(NULL));

	Intern *intern = new Intern();

	std::string names[10] = {"test",
						     "presidential",
							 "presidential pardon",
							 "presidential pardon form",
							 "shrubbery",
							 "shrubbery creation",
							 "shrubbery creation form",
							 "robotomy",
							 "robotomy request",
							 "robotomy request form"};

	Form *form;

	for (int i = 0; i < 10; i++)
	{
		try
		{
			form = intern->makeForm(names[i], "target");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
			continue;
		}
		std::cout << *form << std::endl << std::endl;
		delete form;
	}

	return 0;
}
