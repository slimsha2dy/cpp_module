/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:34:59 by choihwiyong       #+#    #+#             */
/*   Updated: 2023/02/24 19:05:39 by choihwiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
    Zombie	aZombie;
    Zombie  *nZombie;

    aZombie.setName("foo");
    aZombie.announce();

    nZombie = newZombie("faa");
	nZombie->announce();
	delete nZombie;

	randomChump("town");
}
