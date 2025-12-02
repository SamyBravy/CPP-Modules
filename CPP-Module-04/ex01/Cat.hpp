/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:12:36 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 23:42:02 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;

    public:
        Cat();
        Cat(Cat const &copy);
        virtual ~Cat();
        Cat &operator=(Cat const &copy);

        Brain *getBrain() const;

        virtual void makeSound() const;
};

#endif
