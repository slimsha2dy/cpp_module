/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:54:22 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 19:58:06 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "An animal was born" << std::endl;
    this->type = "default";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "An animal was born" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
   std::cout << "An animal is dead" << std::endl; 
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "ANIMAL SOUND!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}