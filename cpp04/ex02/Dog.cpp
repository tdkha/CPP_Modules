/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 01:17:33 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/07 17:15:24 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog parameterized constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*(dog._brain));
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	_brain = 0;
}

Dog &Dog::operator = (const Dog &dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog)
	{
		Animal::operator=(dog);
		*_brain = *(dog._brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog <" << this->getType() << "> makes a wau wau sound" << std::endl;
}