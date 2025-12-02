/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:12:29 by samuele           #+#    #+#             */
/*   Updated: 2024/11/29 23:26:45 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _brain = new Brain(*copy._brain);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(Cat const &copy)
{
    if (this != &copy)
    {
        _type = copy._type;
        *_brain = *copy._brain;
    }
    return *this;
}

Brain *Cat::getBrain() const
{
    return _brain;
}

void Cat::makeSound() const
{
    std::cout << "MIAOOO!" << std::endl;
}
