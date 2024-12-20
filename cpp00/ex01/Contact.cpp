/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:22:14 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/20 08:24:19 by ktieu            ###   ########.fr       */
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

