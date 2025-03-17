/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:21:10 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 14:56:40 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& org);
		~Bureaucrat();

		Bureaucrat &operator = (const Bureaucrat &org);

		int getGrade() const;
		const std::string &getName() const;

		void increment();
		void decrement();

		void signForm(Form &form) const;
		
		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream &operator << (std::ostream &os, const Bureaucrat & b);

class Bureaucrat::GradeTooHighException : public std::exception
{
	const char *what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	const char *what() const throw();
};