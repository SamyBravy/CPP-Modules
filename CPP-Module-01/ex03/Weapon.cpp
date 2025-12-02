/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:06:36 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 14:06:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { }

Weapon::Weapon(std::string type) : type(type) { }

Weapon::~Weapon() { }

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
