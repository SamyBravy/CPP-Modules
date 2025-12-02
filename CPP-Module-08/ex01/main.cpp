/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:31:29 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 15:31:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <list>

int main()
{
    srand(time(NULL));

    std::cout << "Subject tests" << std::endl;

    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl;

    std::cout << "My tests" << std::endl;

    Span sp2 = Span(15000);

    for (int i = 0; i < 100; i++)
        sp2.addNumber(rand() % 10000);
    
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    std::list<int> lst;
    for (int i = 0; i < 15000; i++)
        lst.push_back(i);
    
    try
    {
        sp2.addRange(lst.begin(), lst.end());
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    Span sp3 = Span(5);
    sp3.addNumber(6);

    try
    {
        sp3.shortestSpan();
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
