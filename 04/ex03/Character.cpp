/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:01:22 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 17:03:31 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Color.hpp"

Character::Character()
{
    std::cout << C_YLLW << "Character default constructor called" << C_NRML << std::endl;
    this->name = "default";
    for (int i = 0; i < 4; i++)
    {
        this->slot[i] = nullptr;
    }
}

Character::Character(std::string name)
{
    std::cout << C_YLLW << "Character " << name << " constuctor called" << C_NRML << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        this->slot[i] = nullptr;
    }
}

Character::Character(const Character &other)
{
    std::cout << C_YLLW << "Character copy constructor called" << C_NRML << std::endl;
    *this = other;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
        {
            delete this->slot[i];
            this->slot[i] = nullptr;
        }
    }
}

Character& Character::operator =(const Character &other)
{
    std::cout << C_YLLW << "Copy assignment operator called" << C_NRML << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->slot[i])
            {
                delete this->slot[i];
                this->slot[i] = 0;
            }
            if (other.slot[i])
            {
                this->slot[i] = other.slot[i]->clone();
            }
        }
    }
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->name);
}

void    Character::equip(AMateria *m)
{
    if (!m)
        return ;
    int i = 0;
    while (i < 4)
    {
        if (!this->slot[i])
            break;
        i++;
    }
    if (i == 4)
    {
        std::cout << C_YLLW << "The slot is full" << C_NRML << std::endl;
        return ;
    }
    std::cout << C_YLLW << "Character " << this->name << " equips " << m->getType() << C_NRML << std::endl;
    this->slot[i] = m;
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << C_YLLW << "Idx is out of range" << C_NRML << std::endl;
        return ;
    }
    if (!this->slot[idx])
    {
        std::cout << C_YLLW << "The slot number is empty" << C_NRML << std::endl;
        return ;
    }
    this->slot[idx] = nullptr;
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << C_YLLW << "Idx is out of range" << C_NRML << std::endl;
        return ;
    }
    if (!this->slot[idx])
    {
        std::cout << C_YLLW << "The slot number is empty" << C_NRML << std::endl;
        return ;
    }
    std::cout << C_YLLW << "Character " << this->name << " use Materia to " << target.getName() << C_NRML << std::endl;
    this->slot[idx]->use(target);
}