//
// Created by Wolmer Rudy on 4/28/21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string &target;

	RobotomyRequestForm();
public:
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &original);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &operand);

	void action() const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
