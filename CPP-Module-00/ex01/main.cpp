/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:44:41 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 22:44:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

std::string	insertField(std::string field)
{
	std::string	str;

	do
	{
		std::cout << "Enter the " << field << ": ";
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << field << " cannot be empty" << std::endl;
	} while (str.empty());
	return (str);
}

void	printInfo(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
	{
		std::cout << std::setw(10) << std::right << str;
	}
}

bool	isInt(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

int main()
{
	PhoneBook	phoneBook;
	std::string	str;

	do
	{
		do
		{
			std::cout << "Options:" << std::endl;
			std::cout << "* ADD: Add a new contact" << std::endl;
			std::cout << "* SEARCH: Search for a contact" << std::endl;
			std::cout << "* EXIT: Exit the program" << std::endl;
			std::cout << "Enter a command: ";
			std::cin >> str;
			if (str != "ADD" && str != "SEARCH" && str != "EXIT")
				std::cout << "Invalid command" << std::endl;
		} while (str != "ADD" && str != "SEARCH" && str != "EXIT");

		if (str == "ADD")
		{
			Contact	contact;
			std::cin.ignore();
			contact.setFirstName(insertField("first name"));
			contact.setLastName(insertField("last name"));
			contact.setNickname(insertField("nickname"));
			contact.setPhoneNumber(insertField("phone number"));
			contact.setDarkestSecret(insertField("darkest secret"));
			phoneBook.addContact(contact);
		}
		else if (str == "SEARCH")
		{
			Contact	contact;

			std::cout << std::setw(10) << "Index";
			std::cout << "|";
			std::cout << std::setw(10) << "First Name";
			std::cout << "|";
			std::cout << std::setw(10) << "Last Name";
			std::cout << "|";
			std::cout << std::setw(10) << "Nickname";
			std::cout << std::endl;
			for (int i = 1; i <= phoneBook.getContactCount(); i++)
			{
				contact = phoneBook.getContact(i - 1);
				std::cout << std::setw(10) << std::right << i;
				std::cout << "|";
				printInfo(contact.getFirstName());
				std::cout << "|";
				printInfo(contact.getLastName());
				std::cout << "|";
				printInfo(contact.getNickname());
				std::cout << std::endl;
			}

			std::string index;
			std::cout << "Enter the index of the contact you want to see: ";
			std::cin >> index;
			std::stringstream ss(index);
			int i;
			ss >> i;
			if (ss.fail())
			{
				std::cerr << "Errore nella conversione!" << std::endl;
				return 1;
			}
			if (!isInt(index) || i < 1 || i > phoneBook.getContactCount())
				std::cout << "Invalid index" << std::endl;
			else
			{
				contact = phoneBook.getContact(i - 1);
				std::cout << "First name: " << contact.getFirstName() << std::endl;
				std::cout << "Last name: " << contact.getLastName() << std::endl;
				std::cout << "Nickname: " << contact.getNickname() << std::endl;
				std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
				std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
			}
		}
		else if (str == "EXIT")
			std::cout << "Exiting program";
		std::cout << std::endl;
	} while (str != "EXIT");
}
