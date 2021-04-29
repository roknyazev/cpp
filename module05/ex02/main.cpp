#include "Form.hpp"
#include "Bureaucrat.hpp"

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));

	Form *r_form	= new RobotomyRequestForm("Target1");
	Form *p_form = new PresidentialPardonForm("Target2");
	Form *s_form = new ShrubberyCreationForm("Target3");

	std::cout << *r_form << std::endl;
	std::cout << *p_form << std::endl;
	std::cout << *s_form << std::endl;
	std::cout << std::endl;

	Bureaucrat *bubba = new Bureaucrat("Bubba", 150);
	std::cout  << *bubba << std::endl;
	std::cout << std::endl;

	bubba->executeForm(*r_form);
	bubba->executeForm(*p_form);
	bubba->executeForm(*s_form);
	std::cout << std::endl;

	bubba->signForm(*r_form);
	bubba->signForm(*p_form);
	bubba->signForm(*s_form);
	std::cout << std::endl;

	for (int i = 0; i < 130; i++)
		bubba->increment();
	std::cout << *bubba << std::endl;
	std::cout << std::endl;

	bubba->signForm(*r_form);
	bubba->signForm(*p_form);
	bubba->signForm(*s_form);
	std::cout << std::endl;

	std::cout << "-----------" << std::endl;
	bubba->executeForm(*r_form);
	std::cout << "-----------" << std::endl;
	bubba->executeForm(*p_form);
	std::cout << "-----------" << std::endl;
	bubba->executeForm(*s_form);
	std::cout << "-----------" << std::endl << std::endl;


	for (int i = 0; i < 17; i++)
		bubba->increment();
	std::cout << *bubba << std::endl << std::endl;

	std::cout << "-----------" << std::endl;
	bubba->executeForm(*p_form);
	std::cout << "-----------" << std::endl;

	return 0;
}
