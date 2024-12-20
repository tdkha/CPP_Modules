/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:16:34 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/20 08:21:46 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		int _index;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phone_num;
		std::string	_secret;
	public:
		Contact();
		Contact(int index,
				std::string	first_name,
				std::string	last_name,
				std::string	nickname,
				std::string	phone_number,
				std::string	secret);
		void display_short();
		void display_long();
};

#endif