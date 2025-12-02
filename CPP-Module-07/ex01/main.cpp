/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:24:19 by samuele           #+#    #+#             */
/*   Updated: 2024/12/24 17:35:59 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void add42(T &x);

template <>
void add42(std::string &x);

void printInt(int x);
void printChar(char x);
void printString(std::string x);

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, printInt);
    std::cout << std::endl;
    iter(array, 5, add42<int>);
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;

    std::cout << "----------------" << std::endl;

    std::string array2[] = {"Ciao", "Effi", "Tiago"};
    iter(array2, 3, printString);
    std::cout << std::endl;
    iter(array2, 3, add42<std::string>);
    for (int i = 0; i < 3; i++)
        std::cout << array2[i] << std::endl;

    std::cout << "----------------" << std::endl;

    char array3[] = {'A', 'B', 'C', 'D', 'E'};
    iter(array3, 5, printChar);
    std::cout << std::endl;
    iter(array3, 5, add42<char>);
    for (int i = 0; i < 5; i++)
        std::cout << array3[i] << std::endl;
    
    return 0;
}

template <typename T>
void add42(T &x)
{
    x += 42;
}

template <>
void add42(std::string &x)
{
    x += "42";
}

void printInt(int x)
{
    std::cout << x << std::endl;
}

void printChar(char x)
{
    std::cout << x << std::endl;
}

void printString(std::string x)
{
    std::cout << x << std::endl;
}
