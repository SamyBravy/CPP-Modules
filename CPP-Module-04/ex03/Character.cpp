/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:03:43 by samuele           #+#    #+#             */
/*   Updated: 2024/11/29 23:24:25 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character default constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
    std::cout << "Character parameter constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
    std::cout << "Character copy constructor" << std::endl;
    *this = copy;
}

Character::~Character()
{
    std::cout << "Character destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
            delete _inventory[i];
    }
}

Character &Character::operator=(const Character &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
        {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
        if (copy._inventory[i])
            _inventory[i] = copy._inventory[i]->clone();
    }
    _name = copy._name;
    return *this;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << "Equipped " << m->getType() << " to " << _name << std::endl;
            return ;
        }
    }
    std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        std::cout << "Unequipped " << _inventory[idx]->getType() << " from " << _name << std::endl;
        _inventory[idx] = NULL;
    }
    else
        std::cout << "There is no materia in this slot" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx]->use(target);
    else
        std::cout << "There is no materia in this slot" << std::endl;
}
