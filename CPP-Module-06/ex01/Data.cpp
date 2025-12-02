/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:26:37 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/23 19:27:23 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : num(0) { }

Data::Data(int n, const std::string &s) : num(n), str(s) { }

std::string Data::getStr() const
{
	return str;
}

void Data::setStr(const std::string &s)
{
	str = s;
}

int Data::getNum() const
{
	return num;
}

void Data::setNum(int n)
{
	num = n;
}

void Data::printData() const
{
	std::cout << "num: " << num << std::endl;
	std::cout << "str: " << str << std::endl;
}
