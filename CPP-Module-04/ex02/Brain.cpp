/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:12:42 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 23:15:09 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = copy.getIdea(i);
    }
    return *this;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return _ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
    if (index < 0 || index >= 100)
        return ;
    _ideas[index] = idea;
}
