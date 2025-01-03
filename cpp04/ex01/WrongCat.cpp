/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:03:31 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 13:11:09 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type): WrongAnimal(type)
{
	std::cout << "WrongCat parameterized constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat): WrongAnimal(wrongcat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){std::cout << "WrongCat destructor called" << std::endl;}

WrongCat &WrongCat::operator = (const WrongCat &wrongcat)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &wrongcat)
	{
		WrongAnimal::operator=(wrongcat);
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "A WrongCat makes a wrong meow meow sound" << std::endl;
}