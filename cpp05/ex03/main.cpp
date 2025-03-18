/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:21:38 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/18 17:10:11 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{	
	try
	{
		Bureaucrat	bureaucrat("bureaucrat", 1);
		Intern 		intern;

		AForm *form = intern.makeForm("RobotomyRequestForm", "robot");
		if (form)
		{
			bureaucrat.signForm(*form);
			bureaucrat.executeForm(*form);
			delete form;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}