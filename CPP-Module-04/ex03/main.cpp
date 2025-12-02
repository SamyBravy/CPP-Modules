/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:20:20 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 14:54:17 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "Tests from the subject:" << std::endl << std::endl;

    MateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    std::cout << std::endl << "Additional tests:" << std::endl << std::endl;

    MateriaSource* src2 = new MateriaSource();
    AMateria* tmp2;
    
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    tmp2 = new Ice();
    src2->learnMateria(tmp2);
    delete tmp2;
    
    ICharacter* me2 = new Character("me2");
    
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    me2->equip(tmp2);
    
    me2->unequip(3);
    delete tmp2;
    me2->unequip(98);

    ICharacter* bob2 = new Character("bob2");
    me2->use(0, *bob2);
    me2->use(1, *bob2);
    me2->use(200, *bob2);

    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    me2->equip(tmp2);
    delete tmp2;
    
    delete me2;
    delete bob2;
    delete src2;

    return 0;
}
