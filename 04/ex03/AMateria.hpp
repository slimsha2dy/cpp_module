/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:31 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 16:41:49 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(const AMateria &other);
        AMateria(std::string const &type);
        virtual ~AMateria();

        AMateria& operator =(const AMateria& other);
        std::string const &getType(void) const;

        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif