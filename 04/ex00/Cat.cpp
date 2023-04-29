/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:45:25 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 20:26:54 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "A cat is dead" << std::endl;
}

Cat& Cat::operator =(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "YAONG" << std::endl;
}