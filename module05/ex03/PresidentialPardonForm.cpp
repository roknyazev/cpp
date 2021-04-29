//
// Created by Wolmer Rudy on 4/28/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("Presidential pardon form", 25, 5),
	target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) :
	Form("Presidential pardon form", 25, 5),
	target(original.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &operand)
{
	Form::operator=(operand);
	return (*this);
}

void PresidentialPardonForm::action() const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
