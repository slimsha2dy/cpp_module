/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:02:36 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 19:46:33 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &other);
        virtual ~Animal();

        Animal& operator =(const Animal &other);
        virtual void    makeSound(void) const;
        std::string getType(void) const;
};

#endif