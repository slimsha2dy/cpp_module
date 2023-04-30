/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:24:12 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 16:59:21 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Color.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << C_BLUE << "Ice constructor called" << C_NRML << std::endl;
}

Ice::Ice(const Ice &other)
{
    std::cout << C_BLUE << "Ice copy constructor called" << C_NRML << std::endl;
    *this = other;
}

Ice::~Ice()
{
    std::cout << C_BLUE << "Ice destructor called" << C_NRML << std::endl;
}

Ice& Ice::operator =(const Ice &other)
{
    std::cout << C_BLUE << "Ice copy assignment operator called" << C_NRML << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

AMateria* Ice::clone(void) const
{
    std::cout << C_BLUE << "Ice clone called" << C_NRML << std::endl;
    AMateria *ret = new Ice();
    return (ret);
}

void    Ice::use(ICharacter &target)
{
    std::cout << C_BLUE << "* shoots an ice bolt at " << target.getName() << " *" << C_NRML << std::endl;
}