/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:01:23 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 16:04:57 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>

int	main(void)
{
	Zombie	*horde;
	int		N = 42;
	
	horde = zombieHorde(N, "ZOMZOM");
	for (int i = 0; i < N; i++)
	{
		std::cout << std::setw(5) << i << " ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}