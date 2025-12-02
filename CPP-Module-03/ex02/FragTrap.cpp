/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:54:32 by samuele           #+#    #+#             */
/*   Updated: 2024/11/29 23:32:44 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& src)
{
    _name = src._name;
    _hit_points = src._hit_points;
    _energy_points = src._energy_points;
    _attack_damage = src._attack_damage;
    
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
	if (_hit_points == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
