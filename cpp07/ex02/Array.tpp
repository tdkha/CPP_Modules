/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:27:55 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/26 16:26:13 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(nullptr), _size(0) {};

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {};

template<typename T>
Array<T>::Array(const Array<T> &org) : _size(org._size), _array(new T[org._size])
{
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = org._array[i];
	}
}

template<typename T>
Array<T>::~Array()
{
	delete[] _array;
};

template<typename T>
Array<T> &Array<T>::operator = (const Array<T> &org)
{
	if (this != & org)
	{
		delete[] _array;
		_size = org._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
		{
			_array[i] = org._array[i];
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator [] (unsigned int i)
{
	if (i >= _size)
	{
		throw std::runtime_error("Error: Index out of range");
	}
	return _array[i];
}

template<typename T>
unsigned int Array<T>::size()
{
	return _size;
}