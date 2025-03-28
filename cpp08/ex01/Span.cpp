/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 03:13:45 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/28 14:55:21 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : _n(0) {}
Span::Span(unsigned int N) : _n(N), _vec(){}
Span::Span(const Span &org) : _n(org._n), _vec(org._vec) {}
Span::~Span() {}

Span &Span::operator = (const Span &org)
{
	if (this != &org)
	{
		_n = org._n;
		_vec = org._vec;
	}
	return *this;
}

unsigned int Span::size()					{ return _vec.size(); }
std::vector<int>::iterator Span::begin()	{ return _vec.begin(); }
std::vector<int>::iterator Span::end()		{ return _vec.end(); }

void Span::resize(unsigned int n)
{
	if (n > _n)	
		throw (std::runtime_error("Size limit reached!"));
	_vec.resize(n);
}

void Span::print()
{
	for (size_t i = 0; i < _vec.size(); i++)
	{
		std::cout << _vec[i] << std::endl;
	}
}

void Span::fillRange(
	std::vector<int>::iterator begin,
	std::vector<int>::iterator end
)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	int min = 0;
	int max = 10000; 
	std::uniform_int_distribution<> dis(min, max);
	std::generate(begin, end, [&]() { return dis(gen); });
}

void Span::addNumber(int num)
{
	if (_vec.size() >= _n)
		throw (std::runtime_error("Size limit reached!"));
	_vec.push_back(num);
}
unsigned int Span::shortestSpan()
{
	if (_vec.size() < 2)
	{
		throw std::runtime_error("Shortest span needs 2 or more numbers");
	}
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	unsigned int res = std::numeric_limits<unsigned int>::max();
	for (size_t i = 1; i < sorted.size(); i++)
	{
		unsigned int diff = sorted[i] - sorted[i - 1];
		res = std::min(res, diff);
	}
	return res;
}

unsigned int Span::longestSpan()
{
	if (_vec.size() < 2)
	{
		throw std::runtime_error("Longest span needs 2 or more numbers");
	}
	int minEle = *std::min_element(_vec.begin(), _vec.end());
	int maxEle = *std::max_element(_vec.begin(), _vec.end());
	return std::abs(maxEle - minEle);
}