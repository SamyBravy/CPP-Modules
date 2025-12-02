/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:23:22 by samuele           #+#    #+#             */
/*   Updated: 2024/11/29 23:32:31 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& src)
{
    _name = src._name;
    _hit_points = src._hit_points;
    _energy_points = src._energy_points;
    _attack_damage = src._attack_damage;
    
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
    if (_energy_points == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy points left!" << std::endl;
		return ;
	}
    _energy_points--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
	if (_hit_points == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
    std::cout << "ScavTrap " << _name << " in gate keeper mode" << std::endl;
}
