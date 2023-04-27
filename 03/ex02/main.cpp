/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:30:59 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 20:32:26 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("Oliver");
    FragTrap b("David");

    a.attack("David");
    b.takeDamage(a.getDamage());
    a.highFivesGuys();
    b.beRepaired(10);
}