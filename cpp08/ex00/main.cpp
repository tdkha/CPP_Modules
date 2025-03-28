/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:50:02 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/28 03:00:08 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void)
{
	std::vector<int> arr = {1, 2, 3, 4, 42};
	int to_find = 42;

	try
	{
		std::vector<int>::iterator it = easyfind(arr, to_find);
		std::cout << "Found " << *it << " at index " << std::distance(arr.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}