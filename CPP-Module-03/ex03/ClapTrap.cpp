/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:02:34 by sdell-er          #+#    #+#             */
/*   Updated: 2024/11/29 23:32:56 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "ClapTrap " << _name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	_name = src._name;
	_hit_points = src._hit_points;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;
	
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left!" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hit_points -= amount;
	if (_hit_points < 0)
		_hit_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left!" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
	_hit_points += amount;
}
