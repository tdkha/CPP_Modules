/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 01:38:36 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 12:01:35 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("DefaultName", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &fragtrap)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &fragtrap)
	{
		_name = fragtrap._name;
		_hit_pts = fragtrap._hit_pts;
		_hit_pts_org = fragtrap._hit_pts_org;
		_energy_pts = fragtrap._energy_pts;
		_attack_dmg = fragtrap._attack_dmg;
	}
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (_hit_pts == 0)
		std::cout << "FragTrap " << _name << " is dead. (cannot attack)" << std::endl;
	else if (_energy_pts == 0)
		std::cout << "FragTrap " << _name << " ran out of energy. Cannot attack" << std::endl;
	else
	{
		_energy_pts--;
		std::cout << "FragTrap " << _name << " attacks " << target
				  << " causing " << _attack_dmg << " points of damage" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << "  requests a positive of fives!!!" << std::endl;
}