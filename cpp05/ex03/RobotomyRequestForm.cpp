/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:27:56 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 15:56:53 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():	AForm("RobotomyRequestForm", 72, 45), _target("DefaultTarget") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &org): AForm(org), _target(org._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &org)
{
	if (this != & org)
	{
		AForm::operator=(org);
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
	AForm::execute(b);
	std::srand(time(0));
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy has failed robotomization!" << std::endl;	
}
