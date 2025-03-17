/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:36:28 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 14:13:16 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_exeGrade;
	public:
		Form();
		Form(const std::string &name, int sGrade, int eGrade);
		Form(const Form& org);
		~Form();

		Form &operator = (const Form &org);

		const std::string &getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		
		void beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

class Form::GradeTooHighException : public std::exception
{
	const char *what() const throw();
};

class Form::GradeTooLowException : public std::exception
{
	const char *what() const throw();
};