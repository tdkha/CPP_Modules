/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:15:18 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 19:52:10 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public	ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &character);
		~Character();

		Character &operator = (const Character &character);

		const std::string &getName() const;
		AMateria *getInventory(int index);
		
		void equip(AMateria *materia);
		void unequip(int index);
		void use(int index, ICharacter &target);
		
};