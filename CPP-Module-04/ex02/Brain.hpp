/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:01:03 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 23:14:01 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    
    public:
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        Brain &operator=(Brain const &copy);

        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);
};

#endif
