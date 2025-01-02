/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:10:42 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 13:22:20 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name", 100, 50, 30), _name("Default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
	: ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap), _name(diamondtrap._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &diamondtrap)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &diamondtrap)
	{
		ClapTrap::operator=(diamondtrap);
		ScavTrap::operator=(diamondtrap);
		FragTrap::operator=(diamondtrap);
		_name = diamondtrap._name;
	}
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I? ( " << _name << " " << ClapTrap::_name << " ) " << std::endl;
}
