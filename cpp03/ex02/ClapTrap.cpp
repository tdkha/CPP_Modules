/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 23:01:27 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/03 18:04:15 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	_hit_pts_org = _hit_pts;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
	_hit_pts_org = _hit_pts;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int ad)
	: _name(name), _hit_pts(hp), _hit_pts_org(hp), _energy_pts(ep), _attack_dmg(ad)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
	:	_name(claptrap._name),
		_hit_pts(claptrap._hit_pts),
		_energy_pts(claptrap._energy_pts),
		_attack_dmg(claptrap._attack_dmg)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_hit_pts_org = claptrap._hit_pts_org;
}


ClapTrap &ClapTrap::operator = (const ClapTrap &claptrap)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &claptrap)
	{
		_name = claptrap._name;
		_hit_pts = claptrap._hit_pts;
		_hit_pts_org = claptrap._hit_pts_org;
		_energy_pts = claptrap._energy_pts;
		_attack_dmg = claptrap._attack_dmg;
	}
	return (*this);
}

unsigned int ClapTrap::getHitPts() const 	{ return _hit_pts; }
unsigned int ClapTrap::getEnergyPts() const { return _energy_pts; }
unsigned int ClapTrap::getAttackDmg() const	{ return _attack_dmg; }
std::string	ClapTrap::getName() const 		{ return _name; }


void ClapTrap::attack(const std::string& target)
{
	if (_hit_pts == 0)
		std::cout << "ClapTrap " << _name << " is dead. (cannot attack)" << std::endl;
	else if (_energy_pts == 0)
		std::cout << "ClapTrap " << _name << " ran out of energy. Cannot attack" << std::endl;
	else
	{
		_energy_pts--;
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << " causing " << _attack_dmg << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_pts == 0)
		std::cout << "ClapTrap " << _name << " is more dead. (cannot take more damages)" << std::endl;
	if (amount > 0 && _hit_pts > 0)
	{
		_hit_pts = (_hit_pts > amount) ? (_hit_pts - amount) : 0;
		std::cout << "ClapTrap " << _name << " took " << amount << " damage. " << _hit_pts << " HP left" << std::endl; 
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_pts == 0)
		std::cout << "ClapTrap " << _name << " is dead. (cannot be repaired)" << std::endl;
	else if (_energy_pts == 0)
		std::cout << "ClapTrap " << _name << " ran out of energy. Cannot repair itself" << std::endl;
	else
	{
		_energy_pts--;
		if (_hit_pts + amount > _hit_pts_org)
			_hit_pts = _hit_pts_org;
		else
			_hit_pts += amount;
		std::cout << "ClapTrap " << _name << " heals " << amount << " HP" << std::endl;
	}
}
