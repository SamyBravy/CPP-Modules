/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:20:20 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 13:50:37 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    static_cast<const Dog *>(j)->getBrain()->setIdea(0, "I'm a dog");
    static_cast<const Cat *>(i)->getBrain()->setIdea(0, "I'm a cat");
    
    std::cout << "Animal j: " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << "Idea: " << static_cast<const Dog *>(j)->getBrain()->getIdea(0) << std::endl;
    
    std::cout << "Animal i: " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << "Idea: " << static_cast<const Cat *>(i)->getBrain()->getIdea(0) << std::endl;

    delete j;
    delete i;

    return 0;
}
