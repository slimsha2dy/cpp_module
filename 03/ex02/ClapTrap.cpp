/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:45:59 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 18:54:44 by hwichoi          ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap " << this->name << " Copy Constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =(const ClapTrap &other)
{
    std::cout << "Copy assignment instruction called" << std::endl;
    if (this != &other)
    {
        this->name = other.getName();
		this->hitPoints = other.getHit();
		this->energy = other.getEnergy();
		this->damage = other.getDamage();
    }
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (!this->hitPoints || !this->energy)
    {
        std::cout << "ClapTrap " << this->name << " can't do anything" << std::endl;
    }
    else
    {
        this->energy--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << \
        ", causing " << this->damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints < amount)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount << \
    " points of damage, remaining hp is " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->hitPoints || !this->energy)
    {
        std::cout << "ClapTrap " << this->name << " can't do anything" << std::endl;
    }
    else
    {
        this->energy--;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " is repaired " << amount \
        << " points, remaining hp is " << this->hitPoints << std::endl;
    }
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int ClapTrap::getHit(void) const
{
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergy(void) const
{
	return (this->energy);
}

unsigned int ClapTrap::getDamage(void) const
{
	return (this->damage);
}
