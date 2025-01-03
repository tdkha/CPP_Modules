/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:15:15 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:51:54 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():	_name("DefaultName"), _inventory()
{
}

Character::Character(const std::string &name): _name(name), _inventory()
{
}

Character::Character(const Character &character): _name(character._name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = (character._inventory[i])
			? character._inventory[i]->clone()
			: 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character &Character::operator = (const Character &character)
{
	if (this != &character)
	{
		for (int i = 0; i < 4; i++)
			_inventory[i] = (character._inventory[i])
				? character._inventory[i]->clone()
				: 0;
	}
	return *this;
}

std::string	const &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = materia;
			return;
		}
	}
	// Full slots
	delete materia;
	materia = 0;
}

void Character::unequip(int	index)
{
	if (index >= 0 && index < 4 && _inventory[index])
		_inventory[index] = 0;
}

void Character::use(int index, ICharacter	&target)
{
	if (index >= 0 && index < 4 && _inventory[index])
		_inventory[index]->use(target);
}

AMateria *Character::getInventory(int index)
{
	if (index >= 0 && index < 4)
		return _inventory[index];
	return 0;
}