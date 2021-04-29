//
// Created by Wolmer Rudy on 4/28/21.
//

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree = "      /\\      \n"
												"     /\\*\\     \n"
												"    /\\O\\*\\    \n"
												"   /*/\\/\\/\\   \n"
												"  /\\O\\/\\*\\/\\  \n"
												" /\\*\\/\\*\\/\\/\\ \n"
												"/\\O\\/\\/*/\\/O/\\\n"
												"      ||      \n"
												"      ||      \n"
												"      ||      ";

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("Shrubbery creation form", 145, 137),
	target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) :
	Form("Shrubbery creation form", 145, 137),
	target(original.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &operand)
{
	Form::operator=(operand);
	return (*this);
}

const char *ShrubberyCreationForm::FopenException::what() const throw()
{
	return "Couldn't open target file";
}

void ShrubberyCreationForm::action() const
{
	std::string const shrubName = (this->target + "_shrubbery");
	std::ofstream outfile(shrubName, std::ios::out | std::ios::trunc);

	if (!outfile.is_open() || outfile.bad())
		throw FopenException();
	outfile << tree;
	outfile << std::endl;
	outfile << std::endl;
	outfile << tree;
	outfile.close();
}
