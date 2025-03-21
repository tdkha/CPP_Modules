/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 23:01:30 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 01:08:23 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string				_name;
		unsigned int			_hit_pts;
		unsigned int			_hit_pts_org;
		unsigned int			_energy_pts;
		unsigned int			_attack_dmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();

		ClapTrap &operator = (const ClapTrap &claptrap);

		unsigned int	getHitPts() const;
		unsigned int	getAttackDmg() const;
		std::string	getName() const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};