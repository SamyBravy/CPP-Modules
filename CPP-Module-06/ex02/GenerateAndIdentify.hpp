/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GenerateAndIdentify.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:38:52 by samuele           #+#    #+#             */
/*   Updated: 2024/12/23 22:51:29 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERATEANDIDENTIFY_HPP
# define GENERATEANDIDENTIFY_HPP

# include <iostream>
# include <cstdlib>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base *generate(void);

void identify(Base* p);
void identify(Base& p);

#endif