/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:02:31 by sdell-er          #+#    #+#             */
/*   Updated: 2024/11/26 23:47:41 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap1("Ciao");
	ClapTrap claptrap2(claptrap1);
	ClapTrap claptrap3("Nonna");

	claptrap2.attack("Nonna");
	claptrap3.takeDamage(5);
	for (int i = 0; i < 11; ++i)
		claptrap3.beRepaired(4);
	claptrap3.attack("Nessuno");

	return 0;
}
