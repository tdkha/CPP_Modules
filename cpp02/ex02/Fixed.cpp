/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:49:49 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/02 20:33:44 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	_value = (value << _fraction_bits);
}

Fixed::Fixed(const float value)
{
	_value = (int)roundf(value * (1 << _fraction_bits));
}

Fixed &Fixed::operator=(const Fixed &fixed )
{
	if (this != &fixed)
	{
		_value = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const
{
	return _value;
}

void Fixed::setRawBits( int const raw )
{
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

bool Fixed::operator >  (const Fixed &fixed) const { return this->_value >  fixed._value; }
bool Fixed::operator <  (const Fixed &fixed) const { return this->_value <  fixed._value; }
bool Fixed::operator >= (const Fixed &fixed) const { return this->_value >= fixed._value; }
bool Fixed::operator <= (const Fixed &fixed) const { return this->_value <= fixed._value; }
bool Fixed::operator == (const Fixed &fixed) const { return this->_value == fixed._value; }
bool Fixed::operator != (const Fixed &fixed) const { return this->_value != fixed._value; }

Fixed Fixed::operator + (const Fixed &fixed) const { return Fixed(this->toFloat() + fixed.toFloat()); }
Fixed Fixed::operator - (const Fixed &fixed) const { return Fixed(this->toFloat() - fixed.toFloat()); }
Fixed Fixed::operator * (const Fixed &fixed) const { return Fixed(this->toFloat() * fixed.toFloat()); }
Fixed Fixed::operator / (const Fixed &fixed) const { return Fixed(this->toFloat() / fixed.toFloat()); }

Fixed &Fixed::operator ++ ()
{
	this->_value++;
	return (*this);
}
Fixed &Fixed::operator -- ()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	this->_value++;
	return (temp);
}
Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);
	this->_value--;
	return (temp);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) { return (f1 < f2) ? f1 : f2; }
Fixed &Fixed::max(Fixed &f1, Fixed &f2) { return (f1 > f2) ? f1 : f2; }

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) { return (f1 < f2) ? f1 : f2; }
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) { return (f1 > f2) ? f1 : f2; }