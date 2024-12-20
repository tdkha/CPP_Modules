/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:03:57 by ktieu             #+#    #+#             */
/*   Updated: 2024/12/20 08:12:19 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string>

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string str(av[i]);
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
