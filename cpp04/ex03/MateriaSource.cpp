/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:30:19 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:54:38 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _inventory()
{
	
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = materiasource._inventory[i] 
			? materiasource._inventory[i]->clone()
			: 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = 0;
	}
}

MateriaSource &MateriaSource::operator = (const MateriaSource &materiasource)
{
	if (this != &materiasource)
	{
		for (int i = 0; i < 4; i++)
			_inventory[i] = materiasource._inventory[i] 
				? materiasource._inventory[i]->clone()
				: 0;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *material)
{
	if (!material)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == material)
			return;
		if (!_inventory[i])
		{
			_inventory[i] = material;
			return;
		}	
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] && _inventory[i]->getType() == type)
				return _inventory[i]->clone();
	return (0);
}

AMateria *MateriaSource::getInventory(int index)
{
	if (index >= 0 && index < 4)
		return _inventory[index];
	return 0;
}