/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:31:43 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 15:31:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> v;

        Span();

    public:
        Span(unsigned int N);
        Span(Span const &copy);
        Span &operator=(Span const &copy);
        ~Span();

        void addNumber(int n);
        template <typename Iterator>
        void addRange(Iterator begin, Iterator end);

        int shortestSpan() const;
        int longestSpan() const;

        class FullSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class NoSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

template <typename Iterator>
void Span::addRange(Iterator begin, Iterator end)
{    
    for (Iterator itr = begin; itr != end; itr++)
        addNumber(*itr);
}

#endif
