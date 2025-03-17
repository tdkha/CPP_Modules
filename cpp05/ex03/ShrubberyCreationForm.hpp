/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:36:17 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 15:17:54 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include "AForm.hpp"


class ShrubberyCreationForm: public AForm
{
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &org);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &org);
		
		void execute (const Bureaucrat &b) const override;
};