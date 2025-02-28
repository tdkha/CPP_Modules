/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:53:42 by ktieu             #+#    #+#             */
/*   Updated: 2025/02/28 14:02:56 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!"; 
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!"; 
}

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
		
	}
	return (*this);
}
