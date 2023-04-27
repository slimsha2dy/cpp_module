/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:45:59 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 17:23:42 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default Constructor called" << std::endl;
    this->name = "default";
    this->hitPoints = 10;
    this->energy = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energy = 10;
    this->damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
    }
}