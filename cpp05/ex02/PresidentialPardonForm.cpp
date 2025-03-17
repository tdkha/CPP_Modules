/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:40:14 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 15:56:58 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():	AForm("PresidentialPardonForm", 25, 5), _target("DefaultTarget") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &org): AForm(org), _target(org._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &org)
{
	if (this != & org)
	{
		AForm::operator=(org);
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	AForm::execute(b);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}