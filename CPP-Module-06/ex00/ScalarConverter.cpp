/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:30:05 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 19:16:07 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
    if (this == &obj)
        return *this;
    return *this;
}

bool ScalarConverter::checkInvalid(const std::string &value)
{
	if (value.find_first_not_of("0123456789.-+f") != std::string::npos)
		return true;

	if (value.find('f') != std::string::npos && value.find('f') != value.length() - 1)
		return true;
	if (value.find('.') == 0 || value.find('.') == value.length() - 1)
		return true;
	if (value.find('-') != std::string::npos && value.find('-') != 0)
		return true;
	if (value.find('+') != std::string::npos && value.find('+') != 0)
		return true;
	if ((value[0] == '+' || value[0] == '-') && value[1] == '.')
		return true;

	int f = 0;
	int dot = 0;
	int sign = 0;
	for (size_t i = 0; i < value.length(); i++)
	{
		if (value[i] == 'f')
			f++;
		if (value[i] == '.')
			dot++;
		if (value[i] == '-' || value[i] == '+')
			sign++;
		
		if (f > 1 || dot > 1 || sign > 1)
			return true;
	}
	return false;
}

e_type ScalarConverter::getType(const std::string &value)
{
	if (value == "nan" || value == "nanf" || value == "+inf" || value == "+inff" || value == "-inf" || value == "-inff")
		return PSEUDO;
	if (value.length() <= 1 && !isdigit(value[0]))
		return CHAR;
	if (checkInvalid(value))
		return INVALID;
	if (value.find('f') != std::string::npos)
		return FLOAT;
	if (value.find('.') != std::string::npos || stringToDouble(value) > static_cast<double>(INT_MAX) || stringToDouble(value) < static_cast<double>(INT_MIN))
		return DOUBLE;
	return INT;
}

int	ScalarConverter::getPrecision(const std::string &value)
{
	if (value.find('.') == std::string::npos)
		return 1;
	return value.length() - value.find('.') - 1 - (value.find('f') != std::string::npos);
}

void ScalarConverter::charConvert(const std::string &value)
{
	if (isprint(value[0]))
		std::cout << "char: '" << value[0] << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value[0]) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(value[0]) << std::endl;
}

void ScalarConverter::numberConvert(const std::string &value)
{
	if (isprint(static_cast<char>(stringToInt(value))))
		std::cout << "char: '" << static_cast<char>(stringToInt(value)) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << stringToInt(value) << std::endl;
	std::cout << std::fixed << std::setprecision(getPrecision(value)) << "float: " << stringToFloat(value) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(getPrecision(value)) << "double: " << stringToDouble(value) << std::endl;
}

void ScalarConverter::pseudoConvert(const std::string &value)
{
	if (value == "nan" || value == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (value == "+inf" || value == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (value == "-inf" || value == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void ScalarConverter::convert(const std::string &value)
{
	e_type type = getType(value);
	
	switch (type)
	{
		case CHAR:
			charConvert(value);
			break;
		
		case PSEUDO:
			pseudoConvert(value);
			break;
		
		case INVALID:
			std::cout << "Invalid input" << std::endl;
			break;
		
		default:
			numberConvert(value);
			break;
	}
}

int stringToInt(const std::string &str)
{
	std::stringstream ss(str);
	int num;

	ss >> num;

	return num;
}

float stringToFloat(const std::string &str)
{
	std::stringstream ss(str);
	float num;

	ss >> num;

	return num;
}

double stringToDouble(const std::string &str)
{
	std::stringstream ss(str);
	double num;

	ss >> num;

	return num;
}
