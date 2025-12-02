/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GenerateAndIdentify.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:40:24 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 22:56:00 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GenerateAndIdentify.hpp"

Base *generate(void)
{
    static bool first = true;
    if (first)
    {
        srand(time(NULL));
        first = false;
    }

    switch (rand() % 3)
    {
        case 0:
            return new A;
        
        case 1:
            return new B;
        
        case 2:
            return new C;
        
        default:
            return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &e)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch (const std::exception &e)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}
