/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:05 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 16:00:43 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return NULL;

	Zombie *zombieList = new Zombie[N];

	for (int i = 0; i < N; ++i)
	{
		zombieList[i].setName(name);
	}
	return zombieList;
}