/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:02:31 by sdell-er          #+#    #+#             */
/*   Updated: 2024/11/27 00:02:11 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1;
    scav1.attack("target1");
    scav1.guardGate();

    ScavTrap scav2("Nonno");
    scav2.attack("target2");
    scav2.guardGate();
    scav2.takeDamage(10);

    ScavTrap scav3(scav2);
    scav3.attack("target3");
    scav3.guardGate();

    ScavTrap scav4;
    scav4 = scav2;
    scav4.attack("target4");
    scav4.guardGate();

    for (int i = 0; i < 50; ++i)
        scav2.attack("target5");

    return 0;
}
