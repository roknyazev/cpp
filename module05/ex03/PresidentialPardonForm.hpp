//
// Created by Wolmer Rudy on 4/28/21.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string &target;

	PresidentialPardonForm();
public:
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &original);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &operand);

	void action() const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
