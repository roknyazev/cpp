//
// Created by Wolmer Rudy on 4/29/21.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include "Form.hpp"

class Intern
{
private:
	static const std::string president_form_names[3];
	static const std::string robotomy_form_names[3];
	static const std::string shrubbery_form_names[3];

	static void tryMakeRobotomyForm
	(const std::string &form_name, const std::string &form_target, Form **form);
	static void tryMakePresidentForm
	(const std::string &form_name, const std::string &form_target, Form **form);
	static void tryMakeShrubberyForm
	(const std::string &form_name, const std::string &form_target, Form **form);
	void (*fnc[3])(const std::string &, const std::string &, Form **);
public:
	virtual ~Intern();
	Intern();
	Intern(const Intern &original);
	Intern &operator=(const Intern &operand);



	class CannotCreateExceprion: public std::exception
	{
		const char* what() const throw();
	};

	class SuccessCreateExceprion: public std::exception
	{
		const char* what() const throw();
	};

	Form *makeForm(const std::string &form_name, const std::string &form_target) const;
};


#endif //EX03_INTERN_HPP
