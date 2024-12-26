/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 21:00:03 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/26 21:24:29 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	int			valid_choice = -1;
	Harl		harl;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter [DEBUG/INFO/WARNING/ERROR]" << std::endl;
		return 1;
	}
	for (int i = 0; i < 4; i++)
	{
		if (av[1] == levels[i])
			valid_choice = i;
	}
	switch (valid_choice != -1)
	{
		case 0:
			std::cout << "Invalid level." << std::endl;
			return 1;
		case 1:
			while (valid_choice < 4)
			{
				std::cout << "[ " << levels[valid_choice] << " ]"  << std::endl;
				harl.complain(levels[valid_choice++]);
				std::cout << "\n";
			}
	}
	return 0;
}