/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:19:33 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 16:49:44 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
    this->type = "default";
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria " << type << " constructor called" << std::endl;
    this->type = type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria " << this->type << " destructor called" << std::endl;
}

AMateria& AMateria::operator =(const AMateria& other)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

std::string const &AMateria::getType(void) const
{
    return (this->type);
}

void    AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use called with " << target.getName() << std::endl;
}