#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <regex>

void ScalarConverter::convert(const std::string &str)
{
	if (
		!_isValidNumber(str) 
		&& !(str.length() == 1 && !std::isdigit(str[0]))
		&& !(str == "-inf" || str == "+inf" || str == "nan")
		&& !(str == "-inff" || str == "+inff" || str == "nanf")
	)
	{
		std::cout << "Invalid input" << std::endl;
		return;
	}
	_toChar(str);
	_toInt(str);
	_toFloat(str);
	_toDouble(str);
}

bool ScalarConverter::_isValidNumber(const std::string &str)
{
    std::regex numberPattern("^[+-]?([0-9]*[.])?[0-9]+([f]?)$");
    return std::regex_match(str, numberPattern);
}

void ScalarConverter::_toChar(const std::string &str)
{
	try
	{
		int value = std::stoi(str);
		if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max())
		{
			char c = static_cast<char>(value);
			if (std::isprint(c))
				std::cout << "char: " << c  << std::endl;
			else
				std::cout << "char: Not displayable" << std::endl;
		}
		else
			std::cout << "char: Impossible" << std::endl;
	}
	catch (const std::exception &e)
	{
		if (str.length() == 1)
		{
			char c = str[0];
			if (std::isprint(c))
				std::cout << "char: " << c  << std::endl;
			else
				std::cout << "char: Not displayable" << std::endl;
		}
		else
			std::cout << "char: Impossible" << std::endl;
	}
}


void ScalarConverter::_toInt(const std::string &str)
{
    try
    {
        int value = std::stoi(str);
        std::cout << "int: " << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "int: Impossible" << std::endl;
    }
}

void ScalarConverter::_toFloat(const std::string &str)
{
    try
    {
        float value = std::stof(str);  // Convert to float
        if (std::isinf(value))
            std::cout << "float: " << (value > 0 ? "+inf" : "-inf") << std::endl;
        else if (std::isnan(value))
            std::cout << "float: nan" << std::endl;
        else
            std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "float: Impossible" << std::endl;
    }
}

void ScalarConverter::_toDouble(const std::string &str)
{
    try
    {
        double value = std::stod(str);  // Convert to double
        if (std::isinf(value))
            std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
        else if (std::isnan(value))
            std::cout << "double: nan" << std::endl;
        else
            std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "double: Impossible" << std::endl;
    }
}
