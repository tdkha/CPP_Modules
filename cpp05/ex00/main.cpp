/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:21:38 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/04 11:32:38 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	b1;
	Bureaucrat	b2("B2", 1);
	Bureaucrat	b3("B3", 150);
	Bureaucrat	b1_clone(b1);

	std::cout << "--------------------------------" << std::endl;

	try
	{
		std::cout << b1_clone << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "--------------------------------" << std::endl;

	try
	{
		std::cout << b2 << std::endl;
		b2.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------------------------" << std::endl;

	try
	{
		std::cout << b3 << std::endl;
		b3.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}