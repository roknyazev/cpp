//
// Created by Wolmer Rudy on 4/28/21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	const std::string &target;
	static std::string const tree;
	ShrubberyCreationForm();
public:
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &original);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &operand);

	class FopenException: public std::exception
	{
		virtual const char* what() const throw();
	};

	void action() const;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
