/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:25:53 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 16:34:59 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	zomebie_in_stack()
{
	randomChump("ZombieInStack");
}

Zombie	*zomebie_in_heap()
{
	return (newZombie("ZombieInHeap"));
}

void ft_debug(std::string str)
{
	std::cout << "\n";
	std::cout << "------------------------------" << std::endl;
	std::cout << str << std::endl;
	std::cout << "------------------------------" << std::endl;
}

int	main(void)
{
	Zombie *heapZombie;

	ft_debug("INIT");
	zomebie_in_stack();
	heapZombie = zomebie_in_heap();

	ft_debug("ANNOUNCE");
	heapZombie->announce();

	ft_debug("DELETE");
	delete(heapZombie);
	
	return (0);
}
