/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:20:20 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 22:52:24 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal k(*i);

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << k.getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    k.makeSound();

    delete meta;
    delete j;
    delete i;

    i = &k;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();

    std::cout << std::endl;
    std::cout << "WrongAnimal tests" << std::endl;
    std::cout << std::endl;

    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();

    std::cout << wrong_i->getType() << " " << std::endl;
    std::cout << wrong_meta->getType() << " " << std::endl;

    wrong_i->makeSound();
    wrong_meta->makeSound();

    delete wrong_meta;
    delete wrong_i;

    return 0;
}
