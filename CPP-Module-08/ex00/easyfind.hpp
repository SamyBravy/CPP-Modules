/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 21:41:29 by samuele           #+#    #+#             */
/*   Updated: 2024/12/26 15:29:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class ElementNotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw() { return "Element not found"; }
};

template <typename T>
int &easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        return *std::find(container.begin(), container.end(), value);
    
    throw ElementNotFoundException();
}

#endif
