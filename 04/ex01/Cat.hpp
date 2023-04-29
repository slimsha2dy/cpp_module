/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:43:04 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/29 21:30:07 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat &other);
        ~Cat();

        Cat& operator =(const Cat &other);
        void    makeSound(void) const;
        Brain*  getBrain(void);
};

#endif