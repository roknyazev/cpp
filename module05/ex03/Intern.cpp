//
// Created by Wolmer Rudy on 4/29/21.
//

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



const std::string Intern::president_form_names[3] = {"presidential",
													 "presidential pardon",
													 "presidential pardon form"};
const std::string Intern::shrubbery_form_names[3] = {"shrubbery",
													 "shrubbery creation",
													 "shrubbery creation form"};
const std::string Intern::robotomy_form_names[3] = {"robotomy",
													"robotomy request",
													"robotomy request form"};

Intern::~Intern()
{
}

Intern::Intern()
{
	fnc[0] = &Intern::tryMakePresidentForm;
	fnc[1] = &Intern::tryMakeRobotomyForm;
	fnc[2] = &Intern::tryMakeShrubberyForm;
}

Intern::Intern(const Intern &original)
{
	(void)original;
}

Intern &Intern::operator=(const Intern &operand)
{
	return (*this);
}

void Intern::tryMakeRobotomyForm(const std::string &form_name, const std::string &form_target, Form **form)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name == Intern::robotomy_form_names[i])
		{
			*form = new RobotomyRequestForm(form_target);
			throw SuccessCreateExceprion();
		}
	}
}

void Intern::tryMakePresidentForm(const std::string &form_name, const std::string &form_target, Form **form)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name == Intern::president_form_names[i])
		{
			*form = new PresidentialPardonForm(form_target);
			throw SuccessCreateExceprion();
		}
	}
}

void Intern::tryMakeShrubberyForm(const std::string &form_name, const std::string &form_target, Form **form)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name == Intern::shrubbery_form_names[i])
		{
			*form = new ShrubberyCreationForm(form_target);
			throw SuccessCreateExceprion();
		}
	}
}

Form *Intern::makeForm(const std::string &form_name, const std::string &form_target) const
{
	Form *result = NULL;
	try
	{
		for (int i = 0; i < 3; i++)
		{
			fnc[i](form_name, form_target, &result);
		}
	}
	catch (std::exception &e)
	{
		std::cout << result->getName() << " " <<  e.what() << std::endl;
		return result;
	}
	throw CannotCreateExceprion();
}

const char *Intern::CannotCreateExceprion::what() const throw()
{
	return "Cannot create form";
}

const char *Intern::SuccessCreateExceprion::what() const throw()
{
	return "successfully created";
}
