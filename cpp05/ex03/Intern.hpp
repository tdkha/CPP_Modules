/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:05:13 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 16:17:00 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		static AForm *makeShrubberyCreationForm(const std::string& target);
		static AForm *makeRobotomyRequestForm(const std::string& target);
		static AForm *makePresidentialPardonForm(const std::string& target);	
	public:
		Intern() = default;
		Intern(const Intern &original) = default;
		~Intern() = default;

		Intern &operator = (const Intern &org) = default;

		AForm* makeForm(const std::string& formType, const std::string& target);
};