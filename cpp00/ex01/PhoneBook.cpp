/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:26:05 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/20 12:17:38 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
	_count = 0;
}

std::string prompt_input(std::string prompt)
{
	std::string input = "";
	if (std::cin.eof())
		return input;
	std::cout << prompt << std::endl;
	std::getline(std::cin, input);
	return input;
}

void PhoneBook::add()
{
	std::string firstname = prompt_input("First name:");
	std::string lastname = prompt_input("Last name:");
	std::string nickname = prompt_input("Nickname:");
	std::string phonenum = prompt_input("Phone number:");
	std::string secret = prompt_input("Darkest secret:");
	if (firstname.empty()
		|| lastname.empty()
		|| nickname.empty()
		|| phonenum.empty()
		|| secret.empty())
	{	
		std::cout << "Field can't be empty" << std::endl;
		return;
	}
	Contact contact(_index, firstname, lastname, nickname, phonenum, secret);
	_contact_book[_index] = contact;
	_index = (_index + 1) % 8;
	_count += (_count < 8) ? 1: 0;
}

void PhoneBook::search()
{
	std::string	index_str;

	if (_count <= 0)
		return;
	for (int i = 0; i < _count; ++i)
	{
		_contact_book[i].display_short();
	}
	index_str = prompt_input("Enter index (1-8)");
	if (index_str.length() != 1
		|| index_str.at(0) < '1'
		|| index_str.at(0) > '8'
		|| index_str.at(0) - '1' > _count
	)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	_contact_book[index_str.at(0) - '1'].display();
}