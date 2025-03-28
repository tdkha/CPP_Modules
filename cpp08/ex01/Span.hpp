/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 03:01:57 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/28 15:01:49 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <limits>
#include <random>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_vec;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &org);
		~Span();

		Span &operator = (const Span &org);

		unsigned int size();
		std::vector<int>::iterator begin();
		std::vector<int>::iterator end();
		void resize(unsigned int n);
		void print();
		void fillRange(
			std::vector<int>::iterator begin, 
			std::vector<int>::iterator end
		);

		void addNumber(int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};