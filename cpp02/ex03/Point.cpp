/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 16:28:11 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/01 19:46:49 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// const props must be initialized in the initializer list
Point::Point() : _x(), _y()
{
}
Point::~Point() {}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &original): _x(original._x), _y(original._y) {}

Point &Point::operator = (const Point &point)
{
	if (this != &point)
	{
		this->~Point();
		new (this) Point(point); // new placement
	}
	return (*this);
}

Fixed Point::getX() const { return _x; }
Fixed Point::getY() const { return _y; }