/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:05:07 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 20:00:05 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *k = new WrongCat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound! j->makeSound();
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    delete k;
    return 0;
}