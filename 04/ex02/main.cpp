/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:51:18 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:51:42 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    // const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    i->makeSound();
    j->makeSound();
}