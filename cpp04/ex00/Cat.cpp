/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:05:34 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 13:10:00 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat)
	{
		Animal::operator=(cat);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat <" << this->getType() << "> makes a meow meow sound" << std::endl;
}