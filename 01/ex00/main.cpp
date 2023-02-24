/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:34:59 by choihwiyong       #+#    #+#             */
/*   Updated: 2023/02/25 05:17:37 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
    Zombie	aZombie("foo");
    Zombie  *nZombie;

    aZombie.announce();

    nZombie = newZombie("faa");
	nZombie->announce();

	randomChump("town");
	delete nZombie;
}
