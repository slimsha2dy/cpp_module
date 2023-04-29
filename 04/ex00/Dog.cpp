/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:00:55 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 20:27:07 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "A dog is dead" << std::endl;
}

Dog& Dog::operator =(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "WALWAL!" << std::endl;
}