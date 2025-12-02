/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:44:45 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 14:44:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace(std::string s, std::string s1, std::string s2)
{
	int pos = 0;

	while ((pos = s.find(s1, pos)) != (int)std::string::npos)
	{
		s.erase(pos, s1.length());
		s.insert(pos, s2);
		pos += s2.length();
	}
	return s;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::string line;
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}
	std::ofstream newfile((filename + ".replace").c_str());
	if (!newfile.is_open())
	{
		std::cerr << "Error: could not create file" << std::endl;
		return 1;
	}

	while (std::getline(file, line))
		newfile << replace(line, s1, s2);

	return 0;
}
