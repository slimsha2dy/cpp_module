/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:35:53 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 16:59:05 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Color.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << C_GREN << "Cure constructor called" << C_NRML << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << C_GREN << "Cure copy constructor called" << C_NRML << std::endl;
    *this = other;
}

Cure::~Cure()
{
    std::cout << C_GREN << "Cure destructor called" << C_NRML << std::endl;
}

Cure& Cure::operator =(const Cure &other)
{
    std::cout << C_GREN << "Cure copy assignment operator called" << C_NRML << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

AMateria* Cure::clone(void) const
{
    std::cout << C_GREN << "Cure clone called" << C_NRML << std::endl;
    AMateria *ret = new Cure();
    return (ret);
}

void    Cure::use(ICharacter &target)
{
    std::cout << C_GREN << "* heals " << target.getName() << "'s wounds *" << C_NRML << std::endl;
}