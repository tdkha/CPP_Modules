/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:30:06 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:36:01 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &cure): AMateria(cure._type)
{
}

Cure::~Cure()
{
}

Cure	&Cure::operator = (Cure const &cure)
{
	if (this != &cure)
	{
		AMateria::operator=(cure);
	}
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure()); 
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}