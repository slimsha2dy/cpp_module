/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:03:04 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 19:07:45 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class   ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energy;
        unsigned int damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ~ClapTrap();

        ClapTrap& operator =(const ClapTrap &other);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
		std::string getName(void) const;
		unsigned int getHit(void) const;
		unsigned int getEnergy(void) const;
		unsigned int getDamage(void) const;
};

#endif
