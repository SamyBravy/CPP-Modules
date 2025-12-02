/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:23:19 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/23 19:38:07 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct Data
{
	int num;
	std::string str;

	Data();
	Data(int n, const std::string &s);
	
	std::string getStr() const;
	void setStr(const std::string &s);
	int getNum() const;
	void setNum(int n);

	void printData() const;
};

#endif
