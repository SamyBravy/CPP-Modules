/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:31:52 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 15:31:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) { }

Span::Span(unsigned int N) : _N(N) { }

Span::Span(Span const &copy)
{
    *this = copy;
}

Span::~Span() { }

Span &Span::operator=(Span const &copy)
{
    if (this != &copy)
    {
        _N = copy._N;
        v = copy.v;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (v.size() == _N)
        throw Span::FullSpanException();
    
    v.push_back(n);
}

int Span::shortestSpan() const
{
    if (v.size() <= 1)
        throw Span::NoSpanException();

    std::vector<int> temp(v);
    std::sort(temp.begin(), temp.end());

    int shortest = std::numeric_limits<int>::max();
    for (std::vector<int>::iterator itr = temp.begin(); itr != temp.end() - 1; itr++) 
        if (*(itr + 1) - *itr < shortest)
            shortest = *(itr + 1) - *itr;
    
    return shortest;
}

int Span::longestSpan() const
{
    if (v.size() <= 1)
        throw Span::NoSpanException();

    std::vector<int> temp(v);
    std::sort(temp.begin(), temp.end());

    return temp.back() - temp.front();
}

const char *Span::FullSpanException::what() const throw()
{
    return "Span object is already full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "Too few numbers for a span to exist";
}
