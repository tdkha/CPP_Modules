/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:30:10 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:34:43 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &ice): AMateria(ice._type)
{
}

Ice::~Ice()
{
}

Ice	&Ice::operator = (Ice const &ice)
{
	if (this != &ice)
	{
		AMateria::operator=(ice);
	}
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice()); 
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}