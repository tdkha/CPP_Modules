/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 01:01:41 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 01:33:18 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &scavtrap)
	{
		_name = scavtrap._name;
		_hit_pts = scavtrap._hit_pts;
		_hit_pts_org = scavtrap._hit_pts_org;
		_energy_pts = scavtrap._energy_pts;
		_attack_dmg = scavtrap._attack_dmg;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hit_pts == 0)
		std::cout << "ScavTrap " << _name << " is dead. (cannot attack)" << std::endl;
	else if (_energy_pts == 0)
		std::cout << "ScavTrap " << _name << " ran out of energy. Cannot attack" << std::endl;
	else
	{
		_energy_pts--;
		std::cout << "ScavTrap " << _name << " attacks " << target
				  << " causing " << _attack_dmg << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << "  is now in Gate keeper mode" << std::endl;
}