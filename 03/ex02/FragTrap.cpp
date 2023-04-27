/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:22:56 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 20:30:37 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default Constructor called" << std::endl;
    this->hitPoints = 100;
    this->energy = 100;
    this->damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap " << name << " Constructor called" << std::endl;
    this->hitPoints = 100;
    this->energy = 100;
    this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap " << this->name << " Copy Constructor called" << std::endl;
    *this = other;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " Destructor called" << std::endl;
}

FragTrap& FragTrap::operator =(const FragTrap &other)
{
    if (this != &other)
    {
        this->name = other.getName();
        this->hitPoints = other.getHit();
        this->energy = other.getEnergy();
        this->damage = other.getDamage();
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (!this->hitPoints || !this->energy)
    {
        std::cout << "FragTrap " << this->name << " can't do anything" << std::endl;
    }
    else
    {
        this->energy--;
        std::cout << "FragTrap " << this->name << " highFives with Guys" << std::endl;
    }
}