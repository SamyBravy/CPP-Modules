/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:02:31 by sdell-er          #+#    #+#             */
/*   Updated: 2024/11/27 00:03:08 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap scav1;
    scav1.attack("target1");
    scav1.highFivesGuys();

    FragTrap scav2("Nonno");
    scav2.attack("target2");
    scav2.highFivesGuys();
    scav2.takeDamage(10);

    FragTrap scav3(scav2);
    scav3.attack("target3");
    scav3.highFivesGuys();

    FragTrap scav4;
    scav4 = scav2;
    scav4.attack("target4");
    scav4.highFivesGuys();

    for (int i = 0; i < 50; ++i)
        scav2.attack("target5");

    return 0;
}
