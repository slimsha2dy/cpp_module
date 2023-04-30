/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:45:25 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/30 17:45:03 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "A cat is dead" << std::endl;
    delete this->brain;
    this->brain = 0;
}

Cat& Cat::operator =(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        *(this->brain) = *(other.brain);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "YAONG" << std::endl;
}

Brain* Cat::getBrain(void)
{
    return (this->brain);
}