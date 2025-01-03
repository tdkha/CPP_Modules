/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:17:09 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 13:09:52 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &dog);
		~Dog();

		Dog &operator = (const Dog &dog);

		void makeSound() const;
};