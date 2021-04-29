//
// Created by Wolmer Rudy on 4/28/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include "iostream"
class Bureaucrat;

class Form
{
private:
	const std::string name;
	const int grade_to_sign;
	const int grade_to_exec;
	bool is_signed;

	Form();
public:
	virtual ~Form();
	Form(const std::string &name, int grade_to_sign, int grade_to_exec);
	Form(const Form &original);
	Form &operator=(const Form &operand);

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};

	class NotSignedException: public std::exception
	{
		const char* what() const throw();
	};

	const std::string &getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	bool checkIsSigned() const;

	void beSigned(const Bureaucrat &bureaucrat);
	void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif //EX01_FORM_HPP
