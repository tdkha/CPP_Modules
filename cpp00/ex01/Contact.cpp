/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:22:14 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/20 11:34:09 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::Contact(int index, std::string firstname, std::string lastname,
	std::string nickname, std::string phone_num, std::string secret)
{
	_index = index;
	_firstname = firstname;
	_lastname = lastname;
	_nickname = nickname;
	_phone_num = phone_num;
	_secret = secret;
}

std::string ft_trim(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void Contact::display_short()
{
	std::cout << std::setw(10) << _index << "|";
	std::cout << std::setw(10) << ft_trim(_firstname) << "|";
	std::cout << std::setw(10) << ft_trim(_lastname) << "|";
	std::cout << std::setw(10) << ft_trim(_nickname) << "|";
	std::cout << std::setw(10) << ft_trim(_phone_num) << "|";
	std::cout << std::setw(10) << ft_trim(_secret) << std::endl;
}
void Contact::display()
{
	std::cout << "First name: " << _firstname << std::endl;
	std::cout << "Last name: " << _lastname << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phonenumber: " << _phone_num << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}