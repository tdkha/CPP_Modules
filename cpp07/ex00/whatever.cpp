/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:22:59 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/26 13:30:19 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> const T &min(const T &a, const T &b)
{
	return a < b ? a : b;
}

template <typename T> const T &max(const T &a, const T &b)
{
	return a > b ? a :b;
}