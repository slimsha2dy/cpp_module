/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:51:18 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:39:47 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal *meta[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
    {
        delete meta[i];
    }
    std::cout << std::endl;

    Dog *gae = new Dog();
    Dog *dog = new Dog();
    gae->getBrain()->setIdea("gae ya", 0);
    dog->getBrain()->setIdea("hey dog", 0);
    std::cout << gae->getBrain()->getIdea(0) << std::endl;
    std::cout << dog->getBrain()->getIdea(0) << std::endl;
    *dog = *gae;
    std::cout << gae->getBrain()->getIdea(0) << std::endl;
    std::cout << dog->getBrain()->getIdea(0) << std::endl;
}