/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:41:08 by samuele           #+#    #+#             */
/*   Updated: 2025/01/12 12:39:57 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _n;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        ~Array();
        Array &operator=(const Array &copy);

        unsigned int size() const;

        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };     
};

# include "Array.tpp"

#endif
