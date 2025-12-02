/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:20:20 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 00:00:17 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *dog1 = new Dog();
    Animal *dog2 = new Dog();
    Animal *cat1 = new Cat();
    Animal *cat2 = new Cat();
    
    Animal *animals[4];
    animals[0] = dog1;
    animals[1] = dog2;
    animals[2] = cat1;
    animals[3] = cat2;

    
    (static_cast<Dog *>(animals[0]))->getBrain()->setIdea(0, "I'm a dog");
    (static_cast<Dog *>(animals[1]))->getBrain()->setIdea(15, "I'm the best dog");
    (static_cast<Cat *>(animals[2]))->getBrain()->setIdea(0, "I'm a cat");
    (static_cast<Cat *>(animals[3]))->getBrain()->setIdea(15, "I'm the best cat");

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal " << i << ": " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        
        Brain *animal_brain;
        if (animals[i]->getType() == "Dog")
            animal_brain = (static_cast<Dog *>(animals[i]))->getBrain();
        else
            animal_brain = (static_cast<Cat *>(animals[i]))->getBrain();
        std::cout << "Idea 0: " << animal_brain->getIdea(0) << std::endl;
        std::cout << "Idea 15: " << animal_brain->getIdea(15) << std::endl;
        std::cout << "Idea 2387: " << animal_brain->getIdea(2387) << std::endl;
    }

    for (int i = 0; i < 4; i++)
        delete animals[i];

    return 0;
}
