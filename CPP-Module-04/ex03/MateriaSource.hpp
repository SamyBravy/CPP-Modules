/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:27:49 by samuele           #+#    #+#             */
/*   Updated: 2024/11/28 13:44:44 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materias[4];
    
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &src);
        virtual ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &src);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(const std::string &type);
};

#endif
