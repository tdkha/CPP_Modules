/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:42:27 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/26 14:17:57 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void square_func(int& num){
    num *= num;
}

int main(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	char arr2[5] = {'a', 'B', 'c', 'D', 'e'};
	std::string arr3[2] = {"Hello", "World"};
	bool arr4[2] = {true, false};

	std::cout << "------------------------------" << std::endl;
	iter<int>(arr1, 5, &square_func);
	iter<int>(arr1, 5, &print_func<int>);
	std::cout << std::endl;

	std::cout << "------------------------------" << std::endl;
	iter<char>(arr2, 5, &print_func<char>);
	std::cout << std::endl;

	std::cout << "------------------------------" << std::endl;
	iter<std::string>(arr3, 2, &print_func<std::string>);
	std::cout << std::endl;

	std::cout << "------------------------------" << std::endl;
	iter<bool>(arr4, 2, &print_func<bool>);

	return 0;
}