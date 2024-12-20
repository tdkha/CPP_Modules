/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:28:32 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/20 12:29:10 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook pb = PhoneBook();
	std::string str;

	while (!std::cin.eof())
	{
		str = prompt_input("Enter a command (ADD/SEARCH/EXIT)");
		if (str.compare("ADD") == 0)
			pb.add()	;		
		if (str.compare("SEARCH") == 0)
			pb.search();
		if (str.compare("EXIT") == 0)
			break;
	}
	return 0;
}