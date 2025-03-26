/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:42:38 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/26 14:18:30 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T *arr, size_t length,F func)
{
	if (!arr)
		return;
	for (size_t i = 0; i < length; i++)
	{
		(*func)(arr[i]);
	}
}


template <typename T>
void	print_func(const T &ele)
{
	std::cout << ele << std::endl;
}