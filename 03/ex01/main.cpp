/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:58:57 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 20:03:56 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Oliver");
    ScavTrap b("David");

    a.attack("David");
    b.takeDamage(a.getDamage());
    a.guardGate();
    b.attack("Oliver");
    a.takeDamage(b.getDamage());
    a.beRepaired(10);
    b.beRepaired(10);
}