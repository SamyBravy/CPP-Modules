/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:48:28 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 14:14:26 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
    std::cout << "Ice copy constructor" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
    AMateria::operator=(obj);
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
