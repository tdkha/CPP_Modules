/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 18:33:52 by ktieu             #+#    #+#             */
/*   Updated: 2025/01/01 01:49:40 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fraction_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator=(const Fixed &fixed );		

		bool operator > (const Fixed& fixed) const;
		bool operator < (const Fixed& fixed) const;
		bool operator >= (const Fixed& fixed) const;
		bool operator <= (const Fixed& fixed) const;
		bool operator == (const Fixed& fixed) const;
		bool operator != (const Fixed& fixed) const;

		Fixed operator + (const Fixed &fixed) const;
		Fixed operator - (const Fixed &fixed) const;
		Fixed operator * (const Fixed &fixed) const;
		Fixed operator / (const Fixed &fixed) const;

		Fixed &operator ++ ();
		Fixed &operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed &min(const Fixed &f1, const Fixed &f2);
		static const Fixed &max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);