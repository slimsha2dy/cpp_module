/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:00:55 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:29:41 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog" << std::endl;
    this->brain = new Brain;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "A dog is dead" << std::endl;
    delete this->brain;
    this->brain = 0;
}

Dog& Dog::operator =(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->brain = new Brain(*(other.brain));
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "WALWAL!" << std::endl;
}

Brain* Dog::getBrain(void)
{
    return (this->brain);
}