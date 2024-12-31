/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:49:49 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/01 01:08:36 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = (value << _fraction_bits);
}

/**
 * Description: The bit shifting for float is slightly different but the idea is the same
 * as we shift <N> bits to the left (multiply it by 2 by N times) 
 * 
 * Asssume _fraction_bits = 8
 * =>	OK		:	(integer << 8) = integer * (1 << 8)
 * =>	OK		:	float_value * (1 << 8)
 * =>	KO		:	float_value << 8	
 * =>	Equation:	round(value * (1 << _fraction_bits))
 */
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(value * (1 << _fraction_bits));
}

Fixed &Fixed::operator=(const Fixed &fixed )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		_value = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return _value / (float)(1 << _fraction_bits);
}

int Fixed::toInt() const
{
	return _value >> _fraction_bits;
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}