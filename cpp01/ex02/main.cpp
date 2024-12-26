/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:10:43 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 16:16:08 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::setw(50) << "ADDRESS string: " << &str << std::endl;
	std::cout << std::setw(50) << "ADDRESS stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(50) << "ADDRESS stringREF: " << &stringREF << std::endl;

	std::cout << "\n";
	
	std::cout << std::setw(50) << "VALUE string: " << str << std::endl;
	std::cout << std::setw(50) << "VALUE stringPTR: " << *stringPTR <<std::endl;
	std::cout << std::setw(50) << "VALUE stringREF: " << stringREF <<std::endl;
	
	return 0;
}