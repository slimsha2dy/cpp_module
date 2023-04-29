/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:01:04 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 20:27:30 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat" << std::endl;
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << "A wrongcat is dead" << std::endl;
}

WrongCat& WrongCat::operator =(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "YAONG" << std::endl;
}