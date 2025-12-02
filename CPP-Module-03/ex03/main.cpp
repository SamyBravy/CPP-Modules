/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:02:31 by sdell-er          #+#    #+#             */
/*   Updated: 2024/11/27 01:45:47 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "Testing default constructor:" << std::endl;
    DiamondTrap dt1;
    dt1.whoAmI();
    std::cout << std::endl;

    std::cout << "Testing parameterized constructor:" << std::endl;
    DiamondTrap dt2("Genoveffa");
    dt2.whoAmI();
    std::cout << std::endl;

    std::cout << "Testing copy constructor:" << std::endl;
    DiamondTrap dt3(dt2);
    dt3.whoAmI();
    std::cout << std::endl;

    std::cout << "Testing assignment operator:" << std::endl;
    DiamondTrap dt4;
    dt4 = dt2;
    dt4.whoAmI();
    std::cout << std::endl;

    std::cout << "Testing attack method:" << std::endl;
    dt2.attack("target");
    std::cout << std::endl;

    std::cout << "Testing no energy points left:" << std::endl;
    for (int i = 0; i < 50; i++)
        dt2.beRepaired(10);
    std::cout << std::endl;

    return 0;
}
