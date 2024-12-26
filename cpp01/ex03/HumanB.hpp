/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:21:44 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 16:38:43 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string	_name;
			Weapon		*_weapon;
	public:
			HumanB(std::string name);
			void	attack(void) const;
			void	setWeapon(Weapon &weapon);
};