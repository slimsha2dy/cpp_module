/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:55:31 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:58:03 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria
{
    private:
        std::string type;

    public:
        AMateria(std::string const &type);

        std:string const &getType(void) const;

        virtual AMeteria* clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif