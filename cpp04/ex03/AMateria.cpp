/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:09:19 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:33:57 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

AMateria::AMateria(): _type("DefaultMateria")
{
}

AMateria::AMateria(const std::string &type): _type(type)
{
}

AMateria::AMateria(const AMateria &materia): _type(materia._type)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator = (const AMateria &materia)
{	
	if (this != &materia)
		_type = materia._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void) target;
}