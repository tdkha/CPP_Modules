/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:21:18 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/26 15:32:17 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &org);
		~Array();

		Array<T> &operator = (const Array<T> &org);
		T &operator [] (unsigned int i);

		unsigned int size();
};

#include "Array.tpp"
