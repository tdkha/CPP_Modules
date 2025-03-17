/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_exeGrade;
	public:
		AForm();
		AForm(const std::string &name, int sGrade, int eGrade);
		AForm(const AForm& org);
		~AForm();

		AForm &operator = (const AForm &org);

		const std::string &getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExeGrade() const;
		
		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(const Bureaucrat &bureaucrat) const = 0;

		class GradeTooHighException;
		class GradeTooLowException;
		class NotSignedException;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

class AForm::GradeTooHighException : public std::exception
{
	const char *what() const throw();
};

class AForm::GradeTooLowException : public std::exception
{
	const char *what() const throw();
};

class AForm::NotSignedException : public std::exception
{
	const char *what() const throw();
};