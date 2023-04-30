/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:44:32 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 17:01:37 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Color.hpp"

MateriaSource::MateriaSource()
{
    std::cout << C_PRPL << "MateriaSource default constructor called" << C_NRML << std::endl;
    for (int i = 0; i < AMSIZE; i++)
    {
        this->ama[i] = nullptr;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << C_PRPL << "MateriaSource copy constructor called" << C_NRML << std::endl;
    *this = other;
}

MateriaSource::~MateriaSource()
{
    std::cout << C_PRPL << "MateriaSource destructor called" << C_NRML << std::endl;
    for (int i = 0; i < AMSIZE; i++)
    {
        if (this->ama[i])
        {
            delete this->ama[i];
            this->ama[i] = nullptr;
        }
    }
}

MateriaSource& MateriaSource::operator =(const MateriaSource &other)
{
    std::cout << C_PRPL << "MateriaSource copy assignment opertaor called" << C_NRML << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < AMSIZE; i++)
        {
            if (this->ama[i])
            {
                delete this->ama[i];
                this->ama[i] = 0;
            }
            if (other.ama[i])
            {
                this->ama[i] = other.ama[i]->clone();
            }
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *obj)
{
    if (!obj)
    {
        std::cout << C_PRPL << "Failed to leanMateria" << C_NRML << std::endl;
        return ;
    }
    for (int i = 0; i < AMSIZE; i++)
    {
        if (!this->ama[i])
        {
            std::cout << C_PRPL << "using leanMateria " << obj->getType() << C_NRML << std::endl;
            this->ama[i] = obj->clone();
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < AMSIZE; i++)
    {
        if (this->ama[i] && (this->ama[i]->getType() == type))
        {
            std::cout << "using createMateria " << type << std::endl;
            return (this->ama[i]->clone());
        }
    }
    std::cout << "there is no type in MateriaSource" << std::endl;
    return (nullptr);
}