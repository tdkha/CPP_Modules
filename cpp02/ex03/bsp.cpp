/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:25:59 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/01 19:43:44 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	sign(const Point &p1, const Point &p2, const Point &p3)
{
	return (
		(p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
		- (p2.getX() - p3.getX())* (p1.getY() - p3.getY())
	);
}

bool bsp( Point const p1, Point const p2, Point const p3, Point const point)
{
	Fixed d1 = sign(point, p1, p2);
	Fixed d2 = sign(point, p2, p3);
	Fixed d3 = sign(point, p3, p1);

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}