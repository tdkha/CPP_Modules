/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:06:31 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 16:28:15 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm *Intern::makeShrubberyCreationForm(const std::string &target) {return new ShrubberyCreationForm(target);}
AForm *Intern::makeRobotomyRequestForm(const std::string &target) {return new RobotomyRequestForm(target);}
AForm *Intern::makePresidentialPardonForm(const std::string &target) {return new PresidentialPardonForm(target);}

AForm* Intern::makeForm(const std::string& formType, const std::string& target)
{
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};	
	AForm *(*functions[3]) (const std::string &target) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};
	
	int i = 0;
	while (i < 3 && formType != forms[i])
		i++;
	if (i < 3)
	{
		std::cout << "Intern created " << forms[i] << std::endl;
		return functions[i](target);
	}
	else
	{
		std::cout << "Invalid form" << std::endl;
		return nullptr;
	}
}