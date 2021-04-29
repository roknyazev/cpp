//
// Created by Wolmer Rudy on 4/28/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form("Robotomy request form", 72, 45),
	target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) :
	Form("Robotomy request form", 72, 45),
	target(original.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &operand)
{
	Form::operator=(operand);
	return (*this);
}

void RobotomyRequestForm::action() const
{
	bool is_robotomized;

	is_robotomized = rand() % 2;
	if (is_robotomized)
		std::cout << "* SOME DRILLING NOISES * " << std::endl
			<< target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomize failed" << std::endl;
}
