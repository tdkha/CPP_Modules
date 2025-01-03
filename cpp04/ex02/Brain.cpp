/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:34:29 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 13:41:04 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Idea " + std::to_string(i);
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = original._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator = (const Brain &brain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = brain._ideas[i];
	}
	return *this;
}