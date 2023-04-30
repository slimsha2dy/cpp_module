/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:51:44 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 16:03:32 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define AMSIZE 4

class   MateriaSource : public IMateriaSource
{
    private:
        AMateria *ama[AMSIZE];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        ~MateriaSource();

        MateriaSource& operator =(const MateriaSource &other);
        void    learnMateria(AMateria *obj);
        AMateria    *createMateria(std::string const &type);
};

#endif