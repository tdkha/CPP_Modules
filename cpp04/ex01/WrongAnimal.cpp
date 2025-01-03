/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:21:45 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 13:04:33 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): _type(type)
{
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal): _type(wronganimal._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &wronganimal)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &wronganimal)
	{
		_type = wronganimal.getType();
	}
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal <" << this->getType() << "> makes a wrong sound" << std::endl;
}