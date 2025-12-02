/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:35:00 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 14:04:31 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    std::cout << "MateriaSource copy constructor" << std::endl;
    *this = src;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL)
            delete materias[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL)
        {
            delete materias[i];
            materias[i] = NULL;
        }
        if (src.materias[i])
            materias[i] = src.materias[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = materia;
            std::cout << "Materia " << materia->getType() << " learned" << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && type == materias[i]->getType())
            return materias[i]->clone();
    }
    return NULL;
}
