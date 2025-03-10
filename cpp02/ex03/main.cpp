/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:49:35 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 15:01:31 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

void test(float x1, float y1,
			   float x2, float y2,
			   float x3, float y3,
			   float px, float py)
{
	Point a(x1, y1);
	Point b(x2, y2);
	Point c(x3, y3);
	Point p(px, py);

	std::cout << (bsp(a, b, c, p) ? "OK" : "KO") << std::endl;
}

int main(void)
{
	test(
		0, 0,
		10, 30,
		20, 0,
		10, 15
	);
	test(
		1, 1,
		4, 2,
		3, 9,
		3, 9
	);
	return 0;
}