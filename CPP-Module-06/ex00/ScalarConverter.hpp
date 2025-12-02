/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:20:16 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 19:28:42 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <climits>
# include <iomanip>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
		static e_type getType(const std::string &value);
		static bool checkInvalid(const std::string &value);
		static int getPrecision(const std::string &value);
		static void charConvert(const std::string &value);
		static void numberConvert(const std::string &value);
		static void pseudoConvert(const std::string &value);
    
    public:
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &obj);

        static void convert(const std::string &value);
};

int stringToInt(const std::string &str);
float stringToFloat(const std::string &str);
double stringToDouble(const std::string &str);

#endif
