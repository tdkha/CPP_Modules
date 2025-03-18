/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:35:21 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/18 17:03:15 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default") , _signed(0), _signGrade(150), _exeGrade(150) {}

Form::Form(const std::string &name, int sGrade, int eGrade) : _name(name), _signed(0), _signGrade(sGrade), _exeGrade(eGrade)
{
	if (_signGrade < 1 || _exeGrade < 1) throw Form::GradeTooHighException();
	if (_signGrade > 150 || _exeGrade > 150) throw Form::GradeTooLowException();
}

Form::Form(const Form& org) : _name(org._name), _signed(org._signed), _signGrade(org._signGrade), _exeGrade(org._exeGrade) {}

Form::~Form(){}

Form &Form::operator = (const Form &org)
{
	if (this != &org)
	{
		this->_signed = org._signed;
	}
	return *this;
}

const std::string &Form::getName() const { return this->_name; };
bool Form::getSigned() const { return this->_signed; };
int Form::getSignGrade() const { return this->_signGrade; };
int Form::getExeGrade() const { return this->_exeGrade; };

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();	
}

std::ostream &operator << (std::ostream &os, const Form &f)
{
	os << "Form name: " << f.getName() << std::endl;
	os << "Signed: " << (f.getSigned() ? "True" : "False" ) << std::endl;
	os << "Sign Grade: " << f.getSignGrade() << std::endl;
	os << "Execute Grade: " << f.getExeGrade() << std::endl;
	return os;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}