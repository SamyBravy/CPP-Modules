/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:53:11 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 14:14:40 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
    std::cout << "Cure copy constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
    AMateria::operator=(obj);
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
