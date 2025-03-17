/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:21:38 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/17 14:19:00 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{	
	try
	{
		Form low_form("TooLowForm", 420, 42);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form high_form("TooHighForm", -42, 42);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	Bureaucrat	b1("B1", 68);
	Bureaucrat	b2("B2", 8);
	Form		form("form", 42, 42);

	b1.signForm(form);
	b2.signForm(form);

	std::cout << "-------------------------------" << std::endl;
	std::cout << "FORM INFO" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << form;
}