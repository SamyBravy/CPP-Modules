/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:30:44 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 22:30:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickname = "";
	darkestSecret = "";
	phoneNumber = "";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number)
{
	firstName = first_name;
	lastName = last_name;
	this->nickname = nickname;
	darkestSecret = darkest_secret;
	phoneNumber = phone_number;
}

Contact::~Contact() { }

std::string	Contact::getFirstName() const
{
	return firstName;
}

std::string	Contact::getLastName() const
{
	return lastName;
}

std::string	Contact::getNickname() const
{
	return nickname;
}

std::string	Contact::getDarkestSecret() const
{
	return darkestSecret;
}

std::string	Contact::getPhoneNumber() const
{
	return phoneNumber;
}

void	Contact::setFirstName(std::string first_name)
{
	firstName = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	lastName = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	darkestSecret = darkest_secret;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	phoneNumber = phone_number;
}
