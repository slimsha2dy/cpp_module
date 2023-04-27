/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:46:31 by hwichoi           #+#    #+#             */
/*   Updated: 2023/04/27 18:50:45 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Oliver");
    ClapTrap b("David");

    a.attack("David");
    b.takeDamage(5);
    b.attack("Oliver");
    a.takeDamage(12);
    b.beRepaired(5);
    a.beRepaired(5);
    return (0);
}