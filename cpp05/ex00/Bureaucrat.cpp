/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:53:42 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 13:49:20 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(42){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1) throw Bureaucrat::GradeTooLowException();
	if (grade > 150) throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& org) : _name(org._name), _grade(org._grade) {}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &org)
{
	if (this != &org)
	{
		this->_grade = org._grade;
	}
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

const std::string &Bureaucrat::getName() const
{
	return this->_name;
}


void Bureaucrat::increment()
{
	if (this->_grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}

void Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &operator << (std::ostream &os, const Bureaucrat & b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}