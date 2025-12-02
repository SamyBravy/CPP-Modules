/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:22:13 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 12:17:44 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria parameter constructor" << std::endl;
}

AMateria::AMateria(AMateria const & obj) : _type(obj._type)
{
    std::cout << "AMateria copy constructor" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor" << std::endl;
}

AMateria &AMateria::operator=(AMateria const & obj)
{
    (void)obj;
    return *this;
}

std::string const &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << _type << " used on " << target.getName() << std::endl;
}
