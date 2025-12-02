/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:32:22 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 13:32:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	const int	N = 5;
	Zombie		*zombies = zombieHorde(N, "Zombie");

	std::cout << "Horde of " << N << " zombies:" << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie " << i + 1 << ": ";
		zombies[i].announce();
	}
	
	delete[] zombies;

	return 0;
}
