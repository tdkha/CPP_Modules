/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:56:45 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 00:58:04 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &animal);
		virtual ~Animal();

		Animal &operator = (const Animal &animal);

		virtual void makeSound() const;
		std::string getType() const;
};