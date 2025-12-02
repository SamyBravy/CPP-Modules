/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TemplateFunctions.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:12:28 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 23:19:49 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEFUNCTIONS_HPP
# define TEMPLATEFUNCTIONS_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif
