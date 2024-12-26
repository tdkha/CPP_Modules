/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:38:48 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 21:26:55 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger." << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (!level.compare("DEBUG"))
		_debug();
	else if (!level.compare("INFO"))
		_info();
	else if (!level.compare("WARNING"))
		_warning();
	else if (!level.compare("ERROR"))
		_error();
}
