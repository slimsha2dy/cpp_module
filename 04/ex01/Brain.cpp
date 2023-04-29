/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:24:34 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:35:45 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator =(const Brain &other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

std::string Brain::getIdea(int n) const
{
    return (this->ideas[n]);
}

void   Brain::setIdea(std::string s, int n)
{
   this->ideas[n] = s; 
} 