//
// Created by Wolmer Rudy on 4/28/21.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form()
{
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_exec) :
	name(name),
	grade_to_exec(grade_to_exec),
	grade_to_sign(grade_to_sign),
	is_signed(false)
{
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &original) :
	name(original.name),
	grade_to_exec(original.grade_to_exec),
	grade_to_sign(original.grade_to_sign),
	is_signed(original.is_signed)
{
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &operand)
{
	if (this == &operand)
		return (*this);
	this->is_signed = operand.is_signed;
	return (*this);
}

const std::string &Form::getName() const
{
	return name;
}

int Form::getGradeToSign() const
{
	return grade_to_sign;
}

int Form::getGradeToExec() const
{
	return grade_to_exec;
}

bool Form::checkIsSigned() const
{
	return is_signed;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->is_signed = true;
	else
		throw GradeTooLowException();
}


void Form::execute(const Bureaucrat &executor) const
{
	if (!is_signed)
		throw NotSignedException();
	if (executor.getGrade() > grade_to_exec)
		throw GradeTooLowException();
	action();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}


const char *Form::NotSignedException::what() const throw()
{
	return "Form not signed";
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	if (form.checkIsSigned())
	{
		out << "Signed " << form.getName() << " with required grade to sign: "
			<< form.getGradeToSign()
			<< ", required grade to execute: " << form.getGradeToExec();
	}
	if (!form.checkIsSigned())
	{
		out << "Not signed " << form.getName() << " with required grade to sign: "
			<< form.getGradeToSign()
			<< ", required grade to execute: " << form.getGradeToExec();
	}
	return (out);
}
