/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:54:25 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 16:26:20 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *slot[4];
    
    public:
        Character();
        Character(std::string name);
        Character(const Character &other);
        ~Character();

        Character& operator =(const Character &other);
        std::string const &getName(void) const;
        void    equip(AMateria *m);     // if it is full, do nothing
        void    unequip(int idx);       // don't delete Materias
        void    use(int idx, ICharacter &target);
};

#endif