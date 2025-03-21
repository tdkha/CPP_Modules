#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &str)
{
	if (!_isValidNumber(str) && !(str.length() == 1 && !std::isdigit(str[0])) && 
		!(str == "-inf" || str == "+inf" || str == "nan" || 
		str == "-inff" || str == "+inff" || str == "nanf"))
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
	std::regex numberPattern("^[+-]?[0-9]+([.][0-9]*[f]?)?$");
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
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
	catch (const std::exception &e)
	{
		if (str.length() == 1)
		{
			char c = str[0];
			std::cout << "char: '" << c << "'" << std::endl;
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
		}
	}
}

void ScalarConverter::_toInt(const std::string &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
	{
		int value = static_cast<int>(str[0]);
		std::cout << "int: " << value << std::endl;
	}
	else
	{
		try
		{
			int value = std::stoi(str);
			std::cout << "int: " << value << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "int: impossible" << std::endl;
		}
	}
}

void ScalarConverter::_toFloat(const std::string &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
	{
		float value = static_cast<float>(str[0]);
		std::cout << "float: " << value << "f" << std::endl;
	}
	else
	{
		try
		{
			float value = std::stof(str);
			if (std::isinf(value))
				std::cout << "float: " << (value > 0 ? "+inff" : "-inff") << std::endl;
			else if (std::isnan(value))
				std::cout << "float: nanf" << std::endl;
			else
				std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "float: impossible" << std::endl;
		}
	}
}

void ScalarConverter::_toDouble(const std::string &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
	{
		double value = static_cast<double>(str[0]);
		std::cout << "double: " << value << std::endl;
	}
	else
	{
		try
		{
			double value = std::stod(str);
			if (std::isinf(value))
				std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
			else if (std::isnan(value))
				std::cout << "double: nan" << std::endl;
			else
				std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "double: impossible" << std::endl;
		}
	}
}
