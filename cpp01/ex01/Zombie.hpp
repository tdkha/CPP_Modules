/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:44:55 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 16:07:05 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
