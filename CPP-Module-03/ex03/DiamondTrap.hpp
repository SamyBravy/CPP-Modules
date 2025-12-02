/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:06:26 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 01:17:30 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    
    
    public:
        DiamondTrap();
        DiamondTrap(std::string str_name);
        DiamondTrap(const DiamondTrap& src);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& src);

        void attack(const std::string& target);
        void whoAmI();
};

#endif
