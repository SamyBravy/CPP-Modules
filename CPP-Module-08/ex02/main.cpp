/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:32:54 by marvin            #+#    #+#             */
/*   Updated: 2024/12/27 19:32:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "MutantStack:" << std::endl;

    {
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << "Top: " << mstack.top() << std::endl;

        mstack.pop();
        
        std::cout << "Size:" << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        std::cout << "Iterator:" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::stack<int> s(mstack);

        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();

        ++rit;
        --rit;

        std::cout << "Reverse iterator:" << std::endl;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
    }

    std::cout << std::endl;
    
    std::cout << "List:" << std::endl;

    {
        std::list<int> list;

        list.push_back(5);
        list.push_back(17);

        std::cout << "Top: " << list.back() << std::endl;

        list.pop_back();
        
        std::cout << "Size:" << list.size() << std::endl;
        
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        
        ++it;
        --it;
        
        std::cout << "Iterator:" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::list<int> s(list);

        std::list<int>::reverse_iterator rit = list.rbegin();
        std::list<int>::reverse_iterator rite = list.rend();

        ++rit;
        --rit;

        std::cout << "Reverse iterator:" << std::endl;
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
    }
    
    return 0;
}
