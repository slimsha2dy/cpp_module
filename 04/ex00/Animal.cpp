/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:08:14 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 20:26:38 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "An animal was born" << std::endl;
    this->type = "default";
}

Animal::Animal(std::string type)
{
    std::cout << "An animal was born" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &other)
{
    std::cout << "An animal was born" << std::endl;
    *this = other;
}

Animal::~Animal()
{
   std::cout << "An animal is dead" << std::endl; 
}

Animal& Animal::operator =(const Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "ANIMAL SOUND!" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}