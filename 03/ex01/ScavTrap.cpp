/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:32:56 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 20:03:15 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constructor called" << std::endl;
    this->hitPoints = 100;
    this->energy = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap " << name << " Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energy = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap " << this->name << " Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator =(const ScavTrap &other)
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

void ScavTrap::guardGate(void)
{
    if (!this->hitPoints || !this->energy)
    {
        std::cout << "ScavTrap " << this->name << " can't do anything" << std::endl;
    }
    else
    {
        this->energy--;
        std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
    }
}

void ScavTrap::attack(const std::string &target)
{
    if (!this->hitPoints || !this->energy)
    {
        std::cout << "ScavTrap " << this->name << " can't do anything" << std::endl;
    }
    else
    {
        this->energy--;
        std::cout << "ScavTrap " << this->name << " attacks " << target << \
        ", causing " << this->damage << " points of damage!" << std::endl;
    }
}