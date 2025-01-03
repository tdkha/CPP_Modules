/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 00:59:39 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 13:01:49 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type): _type(type)
{
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal &animal): _type(animal._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &animal)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &animal)
	{
		_type = animal.getType();
	}
	return *this;
}

std::string	Animal::getType() const
{
	return _type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal <" << this->getType() << "> makes an animal sound" << std::endl;
}