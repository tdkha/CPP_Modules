/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:21:38 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 16:03:08 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{	
	ShrubberyCreationForm	tree("tree");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	pardon("pardon");
	Bureaucrat 				b1("Bureaucrat1", 1);
	b1.signForm(tree);
	b1.executeForm(tree);
	b1.signForm(robot);
	b1.executeForm(robot);
	b1.signForm(pardon);
	b1.executeForm(pardon);
}