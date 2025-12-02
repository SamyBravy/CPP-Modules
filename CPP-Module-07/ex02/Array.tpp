/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:41:41 by samuele           #+#    #+#             */
/*   Updated: 2025/01/12 12:39:59 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _elements(NULL), _n(0) { }

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    _elements = new T[_n];

    for (unsigned int i = 0; i < _n; i++)
        _elements[i] = T();
}

template <typename T>
Array<T>::Array(const Array &copy) : _elements(NULL)
{
    *this = copy;
}

template <typename T>
Array<T>::~Array()
{
    if (_elements)
        delete[] _elements;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if (&copy == this)
        return *this;
    
    _n = copy._n;
    
    if (_elements)
        delete[] _elements;
    _elements = new T[_n];
    
    for (unsigned int i = 0; i < _n; i++)
        _elements[i] = copy._elements[i];

    return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _n;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _n)
        throw Array::OutOfBoundsException();
    
    return _elements[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= _n)
        throw Array::OutOfBoundsException();
    
    return _elements[index];
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return "Index out of bounds";
}

#endif
