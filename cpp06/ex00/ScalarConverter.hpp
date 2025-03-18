/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:03:09 by ktieu             #+#    #+#             */
/*   Updated: 2025/03/18 15:19:45 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
	private:
		static void _toChar(const std::string &str);
		static void _toInt(const std::string &str);
		static void _toFloat(const std::string &str);
		static void _toDouble(const std::string &str);
		static bool _isValidNumber(const std::string &str);
	public:
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter &org) = delete;
		~ScalarConverter() = delete;
		ScalarConverter &operator=(const ScalarConverter &org) = delete;
		static void convert(const std::string &str);
};