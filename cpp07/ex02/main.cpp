/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:34:00 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/26 15:47:34 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Array<int> arr(10);
	
		for (int i = 0; i < 10; i++)
		{
			arr[i] = i;
		}

		std::cout << "Size: " << arr.size() << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << i << std::endl;
		}

		// std::cout << arr[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
