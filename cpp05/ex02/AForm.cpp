/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:21:55 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/18 17:04:13 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

AForm::AForm() : _name("Default") , _signed(0), _signGrade(150), _exeGrade(150) {}

AForm::AForm(const std::string &name, int sGrade, int eGrade) : _name(name), _signed(0), _signGrade(sGrade), _exeGrade(eGrade)
{
	if (_signGrade < 1 || _exeGrade < 1) throw AForm::GradeTooHighException();
	if (_signGrade > 150 || _exeGrade > 150) throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& org) : _name(org._name), _signed(org._signed), _signGrade(org._signGrade), _exeGrade(org._exeGrade) {}

AForm::~AForm(){}

AForm &AForm::operator = (const AForm &org)
{
	if (this != &org)
	{
		this->_signed = org._signed;
	}
	return *this;
}

const std::string &AForm::getName() const { return this->_name; };
bool AForm::getSigned() const { return this->_signed; };
int AForm::getSignGrade() const { return this->_signGrade; };
int AForm::getExeGrade() const { return this->_exeGrade; };

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();	
}

void AForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();

	if (bureaucrat.getGrade() > this->getExeGrade())
		throw AForm::GradeTooLowException();
}

std::ostream &operator << (std::ostream &os, const AForm &f)
{
	os << "AForm name: " << f.getName() << std::endl;
	os << "Signed: " << (f.getSigned() ? "True" : "False" ) << std::endl;
	os << "Sign Grade: " << f.getSignGrade() << std::endl;
	os << "Execute Grade: " << f.getExeGrade() << std::endl;
	return os;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

const char *AForm::NotSignedException::what() const throw()
{
	return "Form not signed!";
}