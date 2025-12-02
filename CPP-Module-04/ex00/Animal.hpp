/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:00:35 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 22:22:05 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(Animal const &copy);
        virtual ~Animal();
        Animal &operator=(Animal const &copy);

        std::string getType() const;
        virtual void makeSound() const;
};

#endif
