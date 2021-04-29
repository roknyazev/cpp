//
// Created by Wolmer Rudy on 4/27/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>
class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	Bureaucrat();
public:
	virtual ~Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &original);
	Bureaucrat &operator=(const Bureaucrat &operand);

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};

	const std::string &getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP
